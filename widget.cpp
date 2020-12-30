#include "widget.h"
#include "ui_widget.h"
#include <QDir>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include <QtConcurrent>
#include <QCryptographicHash>
#include <QTimer>
#include <QPainter>
#include <QGraphicsDropShadowEffect>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    initWindow();
    QTimer *timer=new QTimer(this);
    timer->setInterval(20);
    connect(timer,&QTimer::timeout,[=]()
    {
        ui->progressBar->setMaximum(totalValue);
        ui->progressBar->setValue(progressValue);
    });
    timer->start();
    connect(ui->progressBar,&QProgressBar::valueChanged,[=](int value)
    {
        ui->progressBar_2->setMaximum(ui->progressBar->maximum());//为了让progressbar2显示更加直观,设置了更大点的值
        ui->progressBar_2->setValue(value+10>ui->progressBar->maximum()?ui->progressBar->maximum():value+10);
        if(value==ui->progressBar->maximum())
        {
            for(QHash<QByteArray,QStringList>::iterator it=filemd5.begin();it!=filemd5.end();it++)
            {
                if(it.value().count()>1)
                {
                    //说明该文件是重复的,在列表框内插入其绝对路径
                    ui->from->addItem(it.value().at(0));
                }
            }
        }
    });
    connect(ui->from,&MyListWidget::clicked,[=]()
    {
        //获取文件名,显示重复文件到to中

    });
}

Widget::~Widget()
{
    delete ui;
}

QStringList Widget::getFilesPath(const QString &dirPath)
{
    QStringList filesList;
    QDir dir(dirPath);
    QFileInfoList fileInfoList=dir.entryInfoList(QDir::NoDotAndDotDot|QDir::Files|QDir::Dirs);
    for(int i=0;i<fileInfoList.count();i++)
    {
        QFileInfo fileinfo=fileInfoList.at(i);
        if(fileinfo.isDir())
        {
            QStringList s=getFilesPath(fileinfo.absoluteFilePath());
            filesList.append(s);
        }
        else
        {
            //如果是目录就回调该函数
            filesList.append(fileinfo.absoluteFilePath());

        }
    }
    return filesList;
}

void Widget::getFileMD5(const QStringList &filelist)
{
    for(int i=0;i<filelist.count();i++)
    {
        QString filetemp=filelist.at(i);
        QCryptographicHash hash(QCryptographicHash::Md5);
        QFile file(filetemp);
        if(!file.open(QIODevice::ReadOnly))
        {
            qDebug()<<"file open error";
            return;
        }
        QByteArray filehash;
        if(filetemp.size()>10*1024*1024)//如果文件大小大于10M
        {
            QByteArray fileslice;
            while(!file.atEnd())
            {
                fileslice=file.read(2*1024*1024);
                hash.addData(fileslice);
            }
            filehash=hash.result();
        }
        else
        {
            QByteArray temp=file.readAll();
            filehash=hash.hash(temp,QCryptographicHash::Md5);
        }
        file.close();
        if(filemd5.contains(filehash))
        {
            filemd5[filehash].append(filetemp);
        }
        else
        {
            filemd5.insert(filehash,QStringList()<<filetemp);
        }
        progressValue=i+1;
        totalValue=filelist.count();
    }
}

QByteArray Widget::getfileMD5(const QString &filePath)
{
    QCryptographicHash hash(QCryptographicHash::Md5);
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"open file error";
        return QByteArray();
    }
    if(file.size()>10*1024*1024)
    {
        QByteArray data;
        if(!file.atEnd())
        {
            data =file.read(2*1024*1024);
            hash.addData(data);
        }
        return hash.result();
    }
    else
    {
        return hash.hash(file.readAll(),QCryptographicHash::Md5);
    }
}
void Widget::on_pushButton_clicked()
{
    //获取文件夹的绝对路径
    ui->from->clear();
    ui->to->clear();
    filemd5.clear();
    QString AbsoultDir=QFileDialog::getExistingDirectory(NULL,"选择路径","D://");
    if(AbsoultDir.isEmpty())
    {
        return;
    }
    ui->progressBar->setValue(0);
    //开启子线程获取文件
    QtConcurrent::run([=]()
    {
        files=getFilesPath(AbsoultDir);
        //只有在子线程里用到了信号和槽才需要加入事件循环(在子线程里捕获主线程里的信号,需要加入事件循环)
        //获取文件的MD5编码
        getFileMD5(files);
        QEventLoop loop;
        loop.exec();
    });
}


void Widget::on_from_clicked(const QModelIndex &)
{
    ui->to->clear();
    QListWidgetItem *selecteditem=ui->from->currentItem();
    QString selectedfile=selecteditem->text();
    QByteArray md5=getfileMD5(selectedfile);
    ui->to->insertItems(0,filemd5[md5]);
}

void Widget::initWindow()
{
    setAcceptDrops(true);
    ui->widget->setAcceptDrops(false);
    ui->widget_2->setAcceptDrops(false);
    ui->widget_3->setAcceptDrops(false);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    progressValue=0;
    totalValue=10;
    ui->verticalLayout_2->setMargin(6);
    QGraphicsDropShadowEffect *graphicsDropShadow=new QGraphicsDropShadowEffect(this);
    graphicsDropShadow->setOffset(0);
    graphicsDropShadow->setColor(QColor(200,50,50));
    graphicsDropShadow->setBlurRadius(6);
    setGraphicsEffect(graphicsDropShadow);
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap;
    pixmap.load(":/images/OIP.jpg");
    pixmap=pixmap.scaled(QSize(width()-40,height()-40));
    painter.fillRect(rect().adjusted(6,6,-6,-6),Qt::white);
    painter.drawPixmap(geometry().left()+12,geometry().top()+12,width()-12,height()-12,pixmap);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    QPoint longdis=event->globalPos();
    QPoint closedis=geometry().topLeft();
    dis=longdis-closedis;
    return QWidget::mousePressEvent(event);
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(dis==QPoint())
    {
        return;
    }
    move(event->globalPos()-dis);
    return QWidget::mouseMoveEvent(event);
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    dis=QPoint();//因为按钮位置为0
    return QWidget::mouseReleaseEvent(event);
}

void Widget::on_pushButton_2_clicked()
{
    showMinimized();
}

void Widget::on_pushButton_3_clicked()
{
    if(isMaximized())
    {
        showNormal();
        ui->verticalLayout_2->setMargin(6);
    }
    else
    {
        showMaximized();
        ui->verticalLayout_2->setMargin(0);
    }
}

void Widget::on_pushButton_4_clicked()
{
    close();
}
