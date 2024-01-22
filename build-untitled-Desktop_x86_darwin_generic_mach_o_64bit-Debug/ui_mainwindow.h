/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *horizontalSliderShiftX;
    QLabel *label_2;
    QSlider *horizontalSliderShiftY;
    glView *animationViewer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSliderShiftZ;
    QLabel *filePathLabel;
    QPushButton *openFilePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 211, 173));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalSliderShiftX = new QSlider(verticalLayoutWidget);
        horizontalSliderShiftX->setObjectName(QString::fromUtf8("horizontalSliderShiftX"));
        horizontalSliderShiftX->setBaseSize(QSize(6, 6));
        horizontalSliderShiftX->setAutoFillBackground(false);
        horizontalSliderShiftX->setMinimum(-10);
        horizontalSliderShiftX->setMaximum(10);
        horizontalSliderShiftX->setPageStep(1);
        horizontalSliderShiftX->setValue(0);
        horizontalSliderShiftX->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderShiftX);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalSliderShiftY = new QSlider(verticalLayoutWidget);
        horizontalSliderShiftY->setObjectName(QString::fromUtf8("horizontalSliderShiftY"));
        horizontalSliderShiftY->setBaseSize(QSize(6, 6));
        horizontalSliderShiftY->setAutoFillBackground(false);
        horizontalSliderShiftY->setMinimum(-10);
        horizontalSliderShiftY->setMaximum(10);
        horizontalSliderShiftY->setPageStep(1);
        horizontalSliderShiftY->setValue(0);
        horizontalSliderShiftY->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderShiftY);

        label->raise();
        horizontalSliderShiftX->raise();
        horizontalSliderShiftY->raise();
        label_2->raise();
        animationViewer = new glView(centralwidget);
        animationViewer->setObjectName(QString::fromUtf8("animationViewer"));
        animationViewer->setGeometry(QRect(240, 10, 551, 401));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 200, 61, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalSliderShiftZ = new QSlider(verticalLayoutWidget_2);
        horizontalSliderShiftZ->setObjectName(QString::fromUtf8("horizontalSliderShiftZ"));
        horizontalSliderShiftZ->setBaseSize(QSize(6, 6));
        horizontalSliderShiftZ->setAutoFillBackground(false);
        horizontalSliderShiftZ->setMinimum(-22);
        horizontalSliderShiftZ->setMaximum(-9);
        horizontalSliderShiftZ->setSingleStep(1);
        horizontalSliderShiftZ->setPageStep(1);
        horizontalSliderShiftZ->setValue(-16);
        horizontalSliderShiftZ->setSliderPosition(-16);
        horizontalSliderShiftZ->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(horizontalSliderShiftZ);

        filePathLabel = new QLabel(centralwidget);
        filePathLabel->setObjectName(QString::fromUtf8("filePathLabel"));
        filePathLabel->setGeometry(QRect(20, 380, 204, 46));
        filePathLabel->setAlignment(Qt::AlignCenter);
        openFilePushButton = new QPushButton(centralwidget);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));
        openFilePushButton->setGeometry(QRect(20, 430, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SHIFT X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "SHIFT Y", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "SHIFT Z", nullptr));
        filePathLabel->setText(QCoreApplication::translate("MainWindow", "PATH", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
