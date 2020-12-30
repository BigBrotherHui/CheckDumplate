#include "MyListWidget.h"
#include <QAbstractItemView>
#include <QMouseEvent>
#include <QApplication>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include <QList>
MyListWidget::MyListWidget(QWidget *parent) : QListWidget(parent)
{
    //setSelectionMode(QAbstractItemView::SingleSelection);
    setAcceptDrops(true);
}

void MyListWidget::dragEnterEvent(QDragEnterEvent *event)
{
    event->acceptProposedAction();
    if(event->dropAction()==Qt::MoveAction||event->dropAction()==Qt::CopyAction)
    {
        event->accept();
    }
}
void MyListWidget::dropEvent(QDropEvent *event)
{
    QList<QUrl> fileurls=event->mimeData()->urls();
    if(fileurls.isEmpty())
    {
        return;
    }
    QString filepath=fileurls.first().toLocalFile();
    if(filepath.isEmpty())
    {
        return;
    }
    qDebug()<<filepath;
}
