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
    point *vertex; // тут хранятся все вершины
    polygon **p; // тут хранятся все полигоны
    int amount_polygon; 
    int amount_vertex;
    point coord_min; // содержит x_min,y_min,z_min
    point coord_max;
} object; // весь 


// создание точки
void init_point(double x, double y, double z, point *point);
// создание полигона (1 строчка из файла)
void init_polygon(int *edges, int amount_edges, polygon **p);
// добавление полигона в общий список
void add_polygon(int *edges, int amount_edges, object *object);
// удаление полигона
void destroy_polygon(polygon *polygon);
// создание нулевой вершины, не участвует в построении графика
void init_vertex(object *object);
// добавление вершины (1 строчка из файла)
void add_vertex(point dot, object *object);
// удаление списка всех вершин
void destroy_vertex(object *object);
// создание структуры объекта, который хранит все
void init_object(object *object);
// удаление объекта
 void destroy_object(object *object);
 // распечатывает объект
 void print_object(object *obj);


/*parser*/

void readfile(char *filename, object *object);