#include "3DViewer.h"

void init_point(double x, double y, double z, point *point){
    point->x = x;
    point->x = y;
    point->x = z;
}
void init_polygon(int *edges, int amount_edges, polygon *polygon){
    polygon->edges = edges;
    polygon->amount_edges = amount_edges;
}

