#include "glview.h"
#include "ui_glview.h"

glView::glView(QWidget *parent)
    : QOpenGLWidget(parent)
{
    setWindowTitle("3DViewer");
    setGeometry(400, 200, 800, 600);
    z=0;
    connect(&tmr, SIGNAL(timeout()), this, SLOT(changeZ()));
    tmr.start(100);
}

void glView::initializeGL(){
    glEnable(GL_DEPTH_TEST);
}
void glView::resizeGL(int w, int h){
    glViewport(0,0,w,h);
    //
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //ПРЕОБРАЗУЕТ МАТРИЦУ ТАК, ЧТОБЫ СОЗДАВАТЬ ОРТОГОНАЛЬНАЯ ПРОЕКЦИЯ
    // -1,1 - по Х; -1,1 - по Y; 1(расстояние от камеры до передней плоскости отсечения),2(от камеры до задней плоскости) - по Z
//    glOrtho(-1,1,-1,1,1,3);
    //ПРЕОБРАЗУЕТ МАТРИЦУ ТАК, ЧТОБЫ СОЗДАВАТЬ ПЕРСПЕКТИВНАЯ ПРОЕКЦИЯ
    glFrustum(-1,1,-1,1,1,3);


}
void glView::paintGL(){
    glClearColor(0.25,0.25,0.25,0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //ВИДОВАЯ МАТРИЦА (GL_MODELVIEW)
    glMatrixMode(GL_MODELVIEW);
    //ЗАГРУЖАЕМ В СТЭК ЕДИНИЧНУЮ МАТРИЦУ
    glLoadIdentity();
    //ПОВЕРНУТЬ СИС-МУ КООРДИНАТ НА КАКОЙ-ТО УГОЛ ПО ОСИ Z, тк 1 для Z
//    glRotatef(90,0,0,1);
    glTranslatef(0,0,-2);
    glRotatef(xRot,1,0,0);
    glRotatef(yRot,0,1,0);
    drawCube(0.5);


//    // 3 = кол-во переменных на вершину, дальше тип, далее смещение и адрес массива
//    glVertexPointer(3,GL_FLOAT, 0, &arr);
//    // разрешаем opengl использовать вершинный буфер
//    glEnableClientState(GL_VERTEX_ARRAY);
//        glColor3d(1,0,0);
//        //указываем что рисуем(треугольники), первый элемент = 0, кол-во вершин = 3
//        glDrawArrays(GL_TRIANGLES, 0 ,3);
//    glDisableClientState(GL_VERTEX_ARRAY);

////    glBegin(GL_TRIANGLES);
////    glColor3d(1,0,0);
////    glVertex3d(0, 0, -1.5);
////    glVertex3d(1 , 0, -1.5);
////    glVertex3d(0, 1, -1.5);
////    glEnd();
}
void glView::changeZ(){
    z+=0.01;
    update();
}
void glView:: drawCube(float a){
    float ver_cub[] = {
        -a,-a,a,  a,-a,a,    a,a,a,  -a,a,a, //передняя
//        a,-a,a,    a,-a,-a,    a,a,-a,  a,a,a, //правая
//        a,-a,a,    a,-a,-a,    -a,-a,-a,  -a,-a,a, //нижняя
//        a,-a,-a,    -a,-a,-a,    -a,a,-a,  a,a,-a, //задняя
//        -a,-a,-a,    -a,a,-a,    -a,a,a,  -a,-a,a, //левая
//        a,a,a,    a,a,-a,    -a,a,-a,  -a,a,a, //верхняя
    };
    float ver1_cub[] = {
         a,-a,a,    a,-a,-a,    a,a,-a,  a,a,a, //правая
    };
    float color_arr[] = {
        1,0,0,    1,0,0,    1,0,0,  1,0,0, //передняя
//        0,0,1,    0,0,1,    0,0,1,  0,0,1, //правая
//        1,0,1,    1,0,1,    1,0,1,  1,0,1, //нижняя
//        0,1,1,    0,1,1,    0,1,1,  0,1,1, //задняя
//        1,1,0,    1,1,0,    1,1,0,  1,1,0, //левая
//        1,0.5,0.5,  1,0.5,0.5,  1,0.5,0.5,  1,0.5,0.5, //верхняя
    };
    float color1_arr[] = {
        0,0,1,    0,0,1,    0,0,1,  0,0,1, //правая
    };
      glVertexPointer(3,GL_FLOAT, 0, &ver_cub);
      glEnableClientState(GL_VERTEX_ARRAY);
      glColorPointer(3, GL_FLOAT, 0, &color_arr);
      glEnableClientState(GL_COLOR_ARRAY);
        glDrawArrays(GL_POLYGON,0,4);
//        glDrawArrays(GL_QUADS,0,24);
      glDisableClientState(GL_COLOR_ARRAY);
      glDisableClientState(GL_VERTEX_ARRAY);

      glVertexPointer(3,GL_FLOAT, 0, &ver1_cub);
      glEnableClientState(GL_VERTEX_ARRAY);
      glColorPointer(3, GL_FLOAT, 0, &color1_arr);
      glEnableClientState(GL_COLOR_ARRAY);
           glDrawArrays(GL_POLYGON,0,4);
//        glDrawArrays(GL_QUADS,0,24);
      glDisableClientState(GL_COLOR_ARRAY);
      glDisableClientState(GL_VERTEX_ARRAY);
}
void glView::mousePressEvent(QMouseEvent* mo){
    mPos = mo->pos();
}
void glView::mouseMoveEvent(QMouseEvent* mo){
    //2=коэф поворота, *-как сделать так, чтобы при клике не выставлялось все в исходное
    xRot=2/M_PI*(mo->pos().y() - mPos.y());
    yRot=2/M_PI*(mo->pos().x() - mPos.x());
    update();
}
