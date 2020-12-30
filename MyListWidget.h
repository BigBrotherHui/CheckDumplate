#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QListWidget>
#include <QPoint>
class MyListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit MyListWidget(QWidget *parent = nullptr);
    //重新实现拖拽事件(当从外界拖放一个文件,from清空且只显示该文件绝对路径,在我的电脑中查找是否有重复文件,如果有在to中显示)
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);

signals:

public slots:

public:
    QPoint begin;
};

#endif // MYLISTWIDGET_H
