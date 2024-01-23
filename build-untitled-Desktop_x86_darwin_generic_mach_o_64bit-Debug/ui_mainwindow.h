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
    QLabel *label_3;
    QSlider *horizontalSliderShiftZ;
    glView *animationViewer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QSlider *horizontalSliderShiftX_2;
    QLabel *label_5;
    QSlider *horizontalSliderShiftY_2;
    QLabel *label_6;
    QSlider *horizontalSliderShiftZ_2;
    QLabel *label_7;
    QSlider *horizontalSliderRotX;
    QLabel *label_8;
    QSlider *horizontalSliderRotY;
    QLabel *label_9;
    QSlider *horizontalSliderRotZ;
    QLabel *label_10;
    QSlider *horizontalSliderScale;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *filePathLabel;
    QLabel *modelInfoLabel;
    QPushButton *openFilePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1350, 805);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 201, 173));
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

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalSliderShiftZ = new QSlider(verticalLayoutWidget);
        horizontalSliderShiftZ->setObjectName(QString::fromUtf8("horizontalSliderShiftZ"));
        horizontalSliderShiftZ->setBaseSize(QSize(6, 6));
        horizontalSliderShiftZ->setAutoFillBackground(false);
        horizontalSliderShiftZ->setMinimum(-20);
        horizontalSliderShiftZ->setMaximum(0);
        horizontalSliderShiftZ->setSingleStep(1);
        horizontalSliderShiftZ->setPageStep(1);
        horizontalSliderShiftZ->setValue(-10);
        horizontalSliderShiftZ->setSliderPosition(-10);
        horizontalSliderShiftZ->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderShiftZ);

        label->raise();
        horizontalSliderShiftX->raise();
        horizontalSliderShiftY->raise();
        label_2->raise();
        label_3->raise();
        horizontalSliderShiftZ->raise();
        animationViewer = new glView(centralwidget);
        animationViewer->setObjectName(QString::fromUtf8("animationViewer"));
        animationViewer->setGeometry(QRect(410, 10, 891, 621));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 200, 211, 431));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        horizontalSliderShiftX_2 = new QSlider(verticalLayoutWidget_2);
        horizontalSliderShiftX_2->setObjectName(QString::fromUtf8("horizontalSliderShiftX_2"));
        horizontalSliderShiftX_2->setBaseSize(QSize(6, 6));
        horizontalSliderShiftX_2->setAutoFillBackground(false);
        horizontalSliderShiftX_2->setMinimum(-10);
        horizontalSliderShiftX_2->setMaximum(10);
        horizontalSliderShiftX_2->setSingleStep(1);
        horizontalSliderShiftX_2->setPageStep(1);
        horizontalSliderShiftX_2->setValue(0);
        horizontalSliderShiftX_2->setTracking(true);
        horizontalSliderShiftX_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderShiftX_2);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        horizontalSliderShiftY_2 = new QSlider(verticalLayoutWidget_2);
        horizontalSliderShiftY_2->setObjectName(QString::fromUtf8("horizontalSliderShiftY_2"));
        horizontalSliderShiftY_2->setBaseSize(QSize(6, 6));
        horizontalSliderShiftY_2->setAutoFillBackground(false);
        horizontalSliderShiftY_2->setMinimum(-10);
        horizontalSliderShiftY_2->setMaximum(10);
        horizontalSliderShiftY_2->setPageStep(1);
        horizontalSliderShiftY_2->setValue(0);
        horizontalSliderShiftY_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderShiftY_2);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        horizontalSliderShiftZ_2 = new QSlider(verticalLayoutWidget_2);
        horizontalSliderShiftZ_2->setObjectName(QString::fromUtf8("horizontalSliderShiftZ_2"));
        horizontalSliderShiftZ_2->setBaseSize(QSize(6, 6));
        horizontalSliderShiftZ_2->setAutoFillBackground(false);
        horizontalSliderShiftZ_2->setMinimum(-18);
        horizontalSliderShiftZ_2->setMaximum(-2);
        horizontalSliderShiftZ_2->setSingleStep(1);
        horizontalSliderShiftZ_2->setPageStep(1);
        horizontalSliderShiftZ_2->setValue(-10);
        horizontalSliderShiftZ_2->setSliderPosition(-10);
        horizontalSliderShiftZ_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderShiftZ_2);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        horizontalSliderRotX = new QSlider(verticalLayoutWidget_2);
        horizontalSliderRotX->setObjectName(QString::fromUtf8("horizontalSliderRotX"));
        horizontalSliderRotX->setBaseSize(QSize(6, 6));
        horizontalSliderRotX->setAutoFillBackground(false);
        horizontalSliderRotX->setMinimum(-314);
        horizontalSliderRotX->setMaximum(314);
        horizontalSliderRotX->setSingleStep(10);
        horizontalSliderRotX->setPageStep(1);
        horizontalSliderRotX->setValue(0);
        horizontalSliderRotX->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderRotX);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        horizontalSliderRotY = new QSlider(verticalLayoutWidget_2);
        horizontalSliderRotY->setObjectName(QString::fromUtf8("horizontalSliderRotY"));
        horizontalSliderRotY->setBaseSize(QSize(6, 6));
        horizontalSliderRotY->setAutoFillBackground(false);
        horizontalSliderRotY->setMinimum(-314);
        horizontalSliderRotY->setMaximum(314);
        horizontalSliderRotY->setPageStep(1);
        horizontalSliderRotY->setValue(0);
        horizontalSliderRotY->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderRotY);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        horizontalSliderRotZ = new QSlider(verticalLayoutWidget_2);
        horizontalSliderRotZ->setObjectName(QString::fromUtf8("horizontalSliderRotZ"));
        horizontalSliderRotZ->setBaseSize(QSize(6, 6));
        horizontalSliderRotZ->setAutoFillBackground(false);
        horizontalSliderRotZ->setMinimum(-314);
        horizontalSliderRotZ->setMaximum(314);
        horizontalSliderRotZ->setPageStep(1);
        horizontalSliderRotZ->setValue(0);
        horizontalSliderRotZ->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderRotZ);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        horizontalSliderScale = new QSlider(verticalLayoutWidget_2);
        horizontalSliderScale->setObjectName(QString::fromUtf8("horizontalSliderScale"));
        horizontalSliderScale->setBaseSize(QSize(6, 6));
        horizontalSliderScale->setAutoFillBackground(false);
        horizontalSliderScale->setMinimum(1);
        horizontalSliderScale->setMaximum(20);
        horizontalSliderScale->setPageStep(1);
        horizontalSliderScale->setValue(10);
        horizontalSliderScale->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderScale);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 640, 371, 101));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        filePathLabel = new QLabel(verticalLayoutWidget_3);
        filePathLabel->setObjectName(QString::fromUtf8("filePathLabel"));
        filePathLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 191, 117);"));
        filePathLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(filePathLabel);

        modelInfoLabel = new QLabel(verticalLayoutWidget_3);
        modelInfoLabel->setObjectName(QString::fromUtf8("modelInfoLabel"));

        verticalLayout_3->addWidget(modelInfoLabel);

        openFilePushButton = new QPushButton(verticalLayoutWidget_3);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));

        verticalLayout_3->addWidget(openFilePushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1350, 24));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "ATHENS SHIFT X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ATHENS SHIFT Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ATHENS SHIFT Z", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ATHENS ROTATION X", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ATHENS ROTATION Y", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ATHENS ROTATION Z", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "ATHENS CHANGE SCALE", nullptr));
        filePathLabel->setText(QCoreApplication::translate("MainWindow", "PATH", nullptr));
        modelInfoLabel->setText(QCoreApplication::translate("MainWindow", "Model info:", nullptr));
        openFilePushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
