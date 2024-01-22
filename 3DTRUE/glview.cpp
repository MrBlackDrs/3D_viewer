#include "glview.h"
#include "ui_mainwindow.h"

glView::glView(QWidget *parent)
    : QOpenGLWidget(parent)
{
    setWindowTitle("3DViewer");
    setGeometry(400, 200, 800, 600);
    z=-2;
    x=0;
    y=0;
//    connect(w, SIGNAL(on_horizontalSliderShiftZ_valueChanged()), this, SLOT(changeZ()));
    //connect(ссылка на отправителя, функция-триггер(отправителя), ссылка на получателя(в данном случае этот же класс), функция-обработчик события)

//    connect(&tmr, SIGNAL(timeout()), this, SLOT(changeZ()));
//    tmr.start(100);
}

glView::~glView()
{
    destroy_object(this->obj);
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
    glClearColor(0.25,0.25,0.25,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //ВИДОВАЯ МАТРИЦА (GL_MODELVIEW)
    glMatrixMode(GL_MODELVIEW);
    //ЗАГРУЖАЕМ В СТЭК ЕДИНИЧНУЮ МАТРИЦУ
    glLoadIdentity();
    //ПОВЕРНУТЬ СИС-МУ КООРДИНАТ НА КАКОЙ-ТО УГОЛ ПО ОСИ Z, тк 1 для Z
//    glRotatef(90,0,0,1);
//    glTranslatef(x,y,z);
    glRotatef(xRot,1,0,0);
    glRotatef(yRot,0,1,0);
    if(obj!=NULL){
        drawObject();
    }
//    // 3 = кол-во переменных на вершину, дальше тип, далее смещение и адрес массива
//    glVertexPointer(3,GL_FLOAT, 0, &arr);
//    // разрешаем opengl использовать вершинный буфер
//    glEnableClientState(GL_VERTEX_ARRAY);
//        glColor3d(1,0,0);
//        //указываем что рисуем(треугольники), первый элемент = 0, кол-во вершин = 3
//        glDrawArrays(GL_TRIANGLES, 0 ,3);
//    glDisableClientState(GL_VERTEX_ARRAY);

//    glBegin(GL_TRIANGLES);
//    glColor3d(1,0,0);
//    glVertex3d(0, 0, -1.5);
//    glVertex3d(1 , 0, -1.5);
//    glVertex3d(0, 1, -1.5);
//    glEnd();
}
void glView::changeZ(int value){
    z=value/10.0;
    update();
}
void glView::changeX(int value){
    x=value/10.0;
    update();
}
void glView::changeY(int value){
    y=value/10.0;
    update();
}

void glView::changeX_2(int value){
    if (obj != NULL) {
        s21_shift(obj, value/10.0, AX_X);
        update();
    }
}

void glView:: drawObject(){
//    glBegin(GL_TRIANGLES);
//    glColor3d(1,0,0);
//    glVertex3d(0, 0, -0.5);
//    glVertex3d(1 , 0, -0.5);
//    glVertex3d(0, 1, -0.5);
//    glEnd();
    for (int i = 1; i < obj->amount_polygon; i++) {
        glBegin(GL_LINE_STRIP);
        for(int j = 0; j < obj->p[i].amount_edges; j++){
            glColor3d(1,1,1);
            glVertex3d(obj->vertex[obj->p[i].edges[j]*3], obj->vertex[obj->p[i].edges[j]*3 + 1], obj->vertex[obj->p[i].edges[j]*3 + 2]);
            if (j < obj->p[i].amount_edges - 1) glVertex3d(obj->vertex[obj->p[i].edges[j+1]*3], obj->vertex[obj->p[i].edges[j+1]*3 + 1], obj->vertex[obj->p[i].edges[j+1]*3 + 2]);
//            qDebug() <<"n" << obj->p[i].edges[j] << "j" << j;
//            qDebug() <<"x" << obj->vertex[(obj->p[i].edges[j])*3];
//            qDebug() << "y" << obj->vertex[obj->p[i].edges[j]*3+1];
//            qDebug() << "z" << obj->vertex[obj->p[i].edges[j]*3+2];
        }
        glEnd();
    }
//    glLineWidth(2.0);
//    glColor3f(1,0,0);
//    glDrawElements(GL_LINES, (obj->amount_polygon-1) * 2, GL_UNSIGNED_INT,
//                     &obj->p[1]);  // multiply by two because we draw
//                                                // lines that close
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
void glView::parse(){
    destroy_object(obj);
    obj = (object *) (calloc(1, sizeof(object)));
    readfile_to_count(filename, obj);
    readfile_to_parse(filename, obj);
    qDebug() << obj->amount_polygon;
    paintGL();
    //    print_object(obj);

}


