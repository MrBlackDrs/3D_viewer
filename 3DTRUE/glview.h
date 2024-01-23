#ifndef GLVIEW_H
#define GLVIEW_H

#include <QDebug>
#include <QWidget>
#include <QOpenGLWidget>
#include <QTimer>
#include <QMouseEvent>
#include <QFileDialog>
#pragma comment(lib, "openg132.lib")
#pragma comment(lib, "GlU32.lib")

#ifdef __cplusplus

extern "C" {
#endif

#include "../3DViewer.h"

#ifdef __cplusplus
}
#endif


QT_BEGIN_NAMESPACE
namespace Ui { class glView; }
QT_END_NAMESPACE

class glView : public QOpenGLWidget
{
    Q_OBJECT
private:
    float z,x,y;
    float xRot, yRot, zRot;
    QPoint mPos;
    QTimer tmr;
    void mousePressEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

public:
    glView(QWidget *parent = nullptr);
    ~glView();
    void parse();
    void drawObject();
    char *filename;
    object* obj = NULL;
    object* obj_copy = NULL;
    void s21_update(int x_shift, int y_shift, int z_shift, int x_rot, int y_rot, int z_rot, int scale);
private:
    Ui::glView *ui;

public slots:
    void changeZ(int value);
    void changeY(int value);
    void changeX(int value);
    void changeX_2(int value);
    void changeY_2(int value);
    void changeZ_2(int value);
    void changeScale(double value);
};
#endif // GLVIEW_H
