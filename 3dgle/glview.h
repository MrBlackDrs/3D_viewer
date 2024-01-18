#ifndef GLVIEW_H
#define GLVIEW_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QTimer>
#include <QMouseEvent>
#pragma comment(lib, "openg132.lib")
#pragma comment(lib, "GlU32.lib")

QT_BEGIN_NAMESPACE
namespace Ui { class glView; }
QT_END_NAMESPACE

class glView : public QOpenGLWidget
{
    Q_OBJECT
private:
    float z;
    float xRot, yRot, zRot;
    QPoint mPos;
    QTimer tmr;
    void drawCube(float a);
    void mousePressEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

public:
    glView(QWidget *parent = nullptr);
private:
    Ui::glView *ui;
public slots:
    void changeZ();
};
#endif // GLVIEW_H
