/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <MyListWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSplitter *splitter;
    MyListWidget *from;
    MyListWidget *to;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBar_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(643, 455);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, -1);
        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"      border: 0px solid #8f8f91;\n"
"      border-radius: 6px;\n"
"      background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(253, 255, 0, 255), stop:1 rgba(255, 255, 0, 255))\n"
"  }\n"
"\n"
" QPushButton:pressed {\n"
"      background-color: qconicalgradient(cx:0, cy:0, angle:0, stop:0.700565 rgba(223, 255, 0, 255), stop:1 rgba(174, 180, 61, 255))\n"
"  }\n"
" QPushButton:hover {\n"
"      background-color: qconicalgradient(cx:1, cy:0.614, angle:0, stop:0 rgba(223, 255, 0, 255), stop:1 rgba(174, 180, 61, 255))\n"
"  }\n"
"  QPushButton:flat {\n"
"      border: none; /* no border for a flat push button */\n"
"  }\n"
"\n"
"  QPushButton:default {\n"
"      border-color: navy; /* make the default button prominent */\n"
"  }"));
        pushButton_2->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"      border: 0px solid #8f8f91;\n"
"      border-radius: 6px;\n"
"      background-color:qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 250, 0, 255), stop:1 rgba(255, 255, 255, 255)) ;\n"
"\n"
"  }\n"
"	  QPushButton:hover {\n"
"      background-color: qconicalgradient(cx:1, cy:1, angle:0, stop:0 rgba(0, 186, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"  }\n"
"  QPushButton:pressed {\n"
"      background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(0, 186, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"  }\n"
"\n"
"  QPushButton:flat {\n"
"      border: none; /* no border for a flat push button */\n"
"  }\n"
"\n"
"  QPushButton:default {\n"
"      border-color: navy; /* make the default button prominent */\n"
"  }"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy3.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy3);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"      border: 0px solid #8f8f91;\n"
"      border-radius: 6px;\n"
"      background-color:qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(255, 118, 0, 255), stop:1 rgba(255, 255, 255, 255)) ;\n"
"  }\n"
"  QPushButton:hover {\n"
"      background-color:qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(236, 109, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"  }\n"
"  QPushButton:pressed {\n"
"      background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:0, stop:0 rgba(205, 95, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"  }\n"
"\n"
"  QPushButton:flat {\n"
"      border: none; /* no border for a flat push button */\n"
"  }\n"
"\n"
"  QPushButton:default {\n"
"      border-color: navy; /* make the default button prominent */\n"
"  }"));

        horizontalLayout_4->addWidget(pushButton_4);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background:url(:/images/OIP.jpg)"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(widget_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        from = new MyListWidget(splitter);
        from->setObjectName(QStringLiteral("from"));
        splitter->addWidget(from);
        to = new MyListWidget(splitter);
        to->setObjectName(QStringLiteral("to"));
        splitter->addWidget(to);

        verticalLayout->addWidget(splitter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        progressBar_2 = new QProgressBar(widget_2);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setStyleSheet(QLatin1String("QProgressBar {\n"
"      border: 2px solid grey;\n"
"      border-radius: 5px;\n"
"  }\n"
"\n"
"  QProgressBar::chunk {\n"
"      background-color: #05B8CC;\n"
"      width: 20px;\n"
"  }\n"
""));
        progressBar_2->setValue(0);

        horizontalLayout_3->addWidget(progressBar_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setStyleSheet(QLatin1String(" QProgressBar::chunk {\n"
"      background-color: #CD96CD;\n"
"      width: 10px;\n"
"      margin: 0.5px;\n"
"  }"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(widget_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "CheckDumplate", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QApplication::translate("Widget", "SelectDir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
