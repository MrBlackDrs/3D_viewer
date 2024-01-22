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
    QLabel *filePathLabel;
    QPushButton *openFilePushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSliderShiftX_2;
    QSlider *horizontalSliderShiftY_2;
    QSlider *horizontalSliderShiftZ_2;
    QSlider *horizontalSliderRotX;
    QSlider *horizontalSliderRotY;
    QSlider *horizontalSliderRotZ;
    QSlider *horizontalSliderScale;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1197, 609);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 201, 111));
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
        horizontalSliderShiftZ->setMinimum(-22);
        horizontalSliderShiftZ->setMaximum(-9);
        horizontalSliderShiftZ->setSingleStep(1);
        horizontalSliderShiftZ->setPageStep(1);
        horizontalSliderShiftZ->setValue(-16);
        horizontalSliderShiftZ->setSliderPosition(-16);
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
        animationViewer->setGeometry(QRect(270, -80, 891, 621));
        filePathLabel = new QLabel(centralwidget);
        filePathLabel->setObjectName(QString::fromUtf8("filePathLabel"));
        filePathLabel->setGeometry(QRect(0, 430, 204, 46));
        filePathLabel->setAlignment(Qt::AlignCenter);
        openFilePushButton = new QPushButton(centralwidget);
        openFilePushButton->setObjectName(QString::fromUtf8("openFilePushButton"));
        openFilePushButton->setGeometry(QRect(30, 480, 100, 32));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 150, 211, 284));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
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

        horizontalSliderShiftZ_2 = new QSlider(verticalLayoutWidget_2);
        horizontalSliderShiftZ_2->setObjectName(QString::fromUtf8("horizontalSliderShiftZ_2"));
        horizontalSliderShiftZ_2->setBaseSize(QSize(6, 6));
        horizontalSliderShiftZ_2->setAutoFillBackground(false);
        horizontalSliderShiftZ_2->setMinimum(-22);
        horizontalSliderShiftZ_2->setMaximum(-9);
        horizontalSliderShiftZ_2->setSingleStep(1);
        horizontalSliderShiftZ_2->setPageStep(1);
        horizontalSliderShiftZ_2->setValue(-16);
        horizontalSliderShiftZ_2->setSliderPosition(-16);
        horizontalSliderShiftZ_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderShiftZ_2);

        horizontalSliderRotX = new QSlider(verticalLayoutWidget_2);
        horizontalSliderRotX->setObjectName(QString::fromUtf8("horizontalSliderRotX"));
        horizontalSliderRotX->setBaseSize(QSize(6, 6));
        horizontalSliderRotX->setAutoFillBackground(false);
        horizontalSliderRotX->setMinimum(-10);
        horizontalSliderRotX->setMaximum(10);
        horizontalSliderRotX->setPageStep(1);
        horizontalSliderRotX->setValue(0);
        horizontalSliderRotX->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderRotX);

        horizontalSliderRotY = new QSlider(verticalLayoutWidget_2);
        horizontalSliderRotY->setObjectName(QString::fromUtf8("horizontalSliderRotY"));
        horizontalSliderRotY->setBaseSize(QSize(6, 6));
        horizontalSliderRotY->setAutoFillBackground(false);
        horizontalSliderRotY->setMinimum(-10);
        horizontalSliderRotY->setMaximum(10);
        horizontalSliderRotY->setPageStep(1);
        horizontalSliderRotY->setValue(0);
        horizontalSliderRotY->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderRotY);

        horizontalSliderRotZ = new QSlider(verticalLayoutWidget_2);
        horizontalSliderRotZ->setObjectName(QString::fromUtf8("horizontalSliderRotZ"));
        horizontalSliderRotZ->setBaseSize(QSize(6, 6));
        horizontalSliderRotZ->setAutoFillBackground(false);
        horizontalSliderRotZ->setMinimum(-10);
        horizontalSliderRotZ->setMaximum(10);
        horizontalSliderRotZ->setPageStep(1);
        horizontalSliderRotZ->setValue(0);
        horizontalSliderRotZ->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderRotZ);

        horizontalSliderScale = new QSlider(verticalLayoutWidget_2);
        horizontalSliderScale->setObjectName(QString::fromUtf8("horizontalSliderScale"));
        horizontalSliderScale->setBaseSize(QSize(6, 6));
        horizontalSliderScale->setAutoFillBackground(false);
        horizontalSliderScale->setMinimum(-10);
        horizontalSliderScale->setMaximum(10);
        horizontalSliderScale->setPageStep(1);
        horizontalSliderScale->setValue(0);
        horizontalSliderScale->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderScale);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1197, 24));
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
