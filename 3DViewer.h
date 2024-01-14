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
    point *coords;
    point coord_min; // содержит x_min,y_min,z_min
    point coord_max;
} vertex; // тут хранятся все вершины

typedef struct{
    vertex v; // тут хранятся все вершины
    polygon *p; // тут хранятся все полигоны
    int *amount_polygon; 
    int *amount_vertex;
} object; // весь 

void init_point(double x, double y, double z, point *point);
void init_polygon(int *edges, int amount_edges, polygon *polygon);