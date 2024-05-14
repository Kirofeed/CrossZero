/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *xButton;
    QPushButton *oButton;
    QPushButton *StartButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_20;
    QPushButton *pushButton_11;
    QPushButton *pushButton_22;
    QPushButton *pushButton_02;
    QPushButton *pushButton_21;
    QPushButton *pushButton_01;
    QPushButton *pushButton_00;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/krestik.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(255, 255, 255)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, -1, 10, 10);
        xButton = new QPushButton(centralwidget);
        xButton->setObjectName("xButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xButton->sizePolicy().hasHeightForWidth());
        xButton->setSizePolicy(sizePolicy1);
        xButton->setMinimumSize(QSize(0, 30));
        xButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(xButton);

        oButton = new QPushButton(centralwidget);
        oButton->setObjectName("oButton");
        sizePolicy1.setHeightForWidth(oButton->sizePolicy().hasHeightForWidth());
        oButton->setSizePolicy(sizePolicy1);
        oButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(oButton);


        verticalLayout->addLayout(horizontalLayout);

        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName("StartButton");
        StartButton->setMinimumSize(QSize(0, 38));
        StartButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(StartButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(320, 320));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 5, 5, 5);
        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_12, 1, 2, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(100, 100));
        pushButton_10->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_20 = new QPushButton(widget);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_20, 2, 0, 1, 1);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMinimumSize(QSize(100, 100));
        pushButton_11->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_11, 1, 1, 1, 1);

        pushButton_22 = new QPushButton(widget);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_22, 2, 2, 1, 1);

        pushButton_02 = new QPushButton(widget);
        pushButton_02->setObjectName("pushButton_02");
        sizePolicy.setHeightForWidth(pushButton_02->sizePolicy().hasHeightForWidth());
        pushButton_02->setSizePolicy(sizePolicy);
        pushButton_02->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_02, 0, 2, 1, 1);

        pushButton_21 = new QPushButton(widget);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_21, 2, 1, 1, 1);

        pushButton_01 = new QPushButton(widget);
        pushButton_01->setObjectName("pushButton_01");
        sizePolicy.setHeightForWidth(pushButton_01->sizePolicy().hasHeightForWidth());
        pushButton_01->setSizePolicy(sizePolicy);
        pushButton_01->setMinimumSize(QSize(100, 100));
        pushButton_01->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_01, 0, 1, 1, 1);

        pushButton_00 = new QPushButton(widget);
        pushButton_00->setObjectName("pushButton_00");
        sizePolicy.setHeightForWidth(pushButton_00->sizePolicy().hasHeightForWidth());
        pushButton_00->setSizePolicy(sizePolicy);
        pushButton_00->setMinimumSize(QSize(100, 100));
        pushButton_00->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_00, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\270\320\263\321\200\320\260\320\273", nullptr));
        xButton->setText(QString());
        oButton->setText(QString());
        StartButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        pushButton_12->setText(QString());
        pushButton_10->setText(QString());
        pushButton_20->setText(QString());
        pushButton_11->setText(QString());
        pushButton_22->setText(QString());
        pushButton_02->setText(QString());
        pushButton_21->setText(QString());
        pushButton_01->setText(QString());
        pushButton_00->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
