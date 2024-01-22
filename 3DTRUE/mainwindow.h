#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "glview.h"
#include <QMainWindow>




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_horizontalSliderShiftZ_valueChanged(int value);
    void on_horizontalSliderShiftX_valueChanged(int value);
    void on_horizontalSliderShiftY_valueChanged(int value);
    void on_openFilePushButton_clicked();
    void on_horizontalSliderShiftX_2_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
