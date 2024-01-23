#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "glview.h"
#include <QMainWindow>
#include <QMessageBox>
#include <qgifimage.h>
#include <QDateTime>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int x_shift;
    int y_shift;
    int z_shift;
    int angle_x;
    int angle_y;
    int angle_z;
    double scale;

private slots:
    void on_horizontalSliderShiftZ_valueChanged(int value);
    void on_horizontalSliderShiftX_valueChanged(int value);
    void on_horizontalSliderShiftY_valueChanged(int value);
    void on_openFilePushButton_clicked();
    void on_horizontalSliderShiftX_2_valueChanged(int value);
    void on_horizontalSliderShiftY_2_valueChanged(int value);
    void on_horizontalSliderShiftZ_2_valueChanged(int value);
    void on_horizontalSliderRotX_valueChanged(int value);
    void on_horizontalSliderRotY_valueChanged(int value);
    void on_horizontalSliderRotZ_valueChanged(int value);
    void on_horizontalSliderScale_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    QString gif_name;
    QGifImage *gif_frame;
    int frames_counter = 0;
    QTimer *timer;
};
#endif // MAINWINDOW_H
