#ifndef WIDGET_H
#define WIDGET_H
#include <QHash>
#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public:
    QStringList getFilesPath(const QString &dirPath);
    void getFileMD5(const QStringList &filelist);
    QByteArray getfileMD5(const QString &filePath);
private slots:
    void on_pushButton_clicked();
    void on_from_clicked(const QModelIndex &index);
    void initWindow();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

signals:

public:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private:
    Ui::Widget *ui;
    QStringList files;
    QHash<QByteArray,QStringList> filemd5;
    int progressValue;//由于使用了QtConCurrent,无法获取sender指针,因此把子线程的值返回给该变量从而设置ProgressBar
    int totalValue;
    QPoint dis;
};

#endif // WIDGET_H
