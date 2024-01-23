#ifndef S21_3DVIEWER
#define S21_3DVIEWER

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AX_X 0
#define AX_Y 1
#define AX_Z 2

typedef struct{
    double x;
    double y;
    double z;
} point; // точка с 3 координатами

typedef struct {
    int *edges; // грань
    int amount_edges;
} polygon; // полигон, одна строчка f

typedef struct{
    double *vertex; // тут хранятся все вершины
    polygon *p; // тут хранятся все полигоны
    int amount_polygon; 
    int amount_vertex;
    point coord_min; // содержит x_min,y_min,z_min
    point coord_max;
} object; // весь 


// создание точки
void init_point(double x, double y, double z, point *point);
// создание полигона (1 строчка из файла)
// void init_polygon(int *edges, int amount_edges, object *object, int pos);
// добавление полигона в общий список
void add_polygon(int *edges, int amount_edges, object *object, int pos);
// удаление полигона
void destroy_polygon(polygon *polygon);
// создание нулевой вершины, не участвует в построении графика
void init_vertex(object *object);
// добавление вершины (1 строчка из файла)
void add_vertex(point dot, object *object, int index);
// удаление списка всех вершин
void destroy_vertex(object *object);
// создание структуры объекта, который хранит все
void init_object(object *object, int amount_v, int amount_p);
// удаление объекта
 void destroy_object(object *object);
 // распечатывает объект
 void print_object(object *obj);
 // копия объекта
 void copy_object(object* obj1, object* obj2);


/*parser*/

// находим количество вершин и полигонов в файле
void readfile_to_count(char *filename, object *object);
// заполняем структуру данными из файла
void readfile_to_parse(char *filename, object *object);
// нормализуем считанный объект (чтобы занимал область от -1 до 1)
void s21_normalize(object *obj);
void s21_change_scale(object *obj, double coef);
void s21_shift(object *obj, double value1, double value2, double value3);
void s21_rotate_x(object *obj, object *obj_copy, double angle);
void s21_rotate_y(object *obj, object *obj_copy, double angle);
void s21_rotate_z(object *obj, object *obj_copy, double angle);
// централизация
void s21_centralize (object *obj);
//возвращает центр, os = 0 - по оси X, 1 - по оси Y, 2 - по оси z
double get_center (object *obj, int ax);
//централизует весь обьект по оси, os = 0 - по оси X, 1 - по оси Y, 2 - по оси z
void set_center(object *obj, int ax, double cent);


#endif  // S21_3DVIEWER