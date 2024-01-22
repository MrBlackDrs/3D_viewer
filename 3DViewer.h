#ifndef S21_3DVIEWER
#define S21_3DVIEWER

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#endif  // S21_3DVIEWER

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


/*parser*/

// находим количество вершин и полигонов в файле
void readfile_to_count(char *filename, object *object);
// заполняем структуру данными из файла
void readfile_to_parse(char *filename, object *object);
// нормализуем считанный объект (чтобы занимал область от -1 до 1)
void normalize(object *obj);