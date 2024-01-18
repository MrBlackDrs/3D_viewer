#include "3DViewer.h"

// создание точки
void init_point(double x, double y, double z, point *point){
    point->x = x;
    point->y = y;
    point->z = z;
}

// создание полигона (1 строчка из файла)
void init_polygon(int *edges, int amount_edges, object *object, int pos){
    // *p = malloc(sizeof(polygon*));
    (object->p[pos]).edges = (int*) calloc(amount_edges, sizeof(int));
    for (int i = 0; i < amount_edges; i++) {
        (object->p[pos]).edges[i] = edges[i];
    }
    (object->p[pos]).amount_edges = amount_edges;
}

// добавление полигона в общий список
void add_polygon(int *edges, int amount_edges, object *object) {
    object->p = (polygon*) realloc(object->p, object->amount_polygon + 1);
    if (object->p != NULL) {
        init_polygon(edges, amount_edges, object, object->amount_polygon);
        object->amount_polygon++;
    }
    else 
        printf("realloc error\n");
}

// удаление полигона
void destroy_polygon(polygon *polygon) {
    polygon->amount_edges = 0;
    if (polygon->edges != NULL) 
        free(polygon->edges);
}

// создание нулевой вершины, не участвует в построении графика
void init_vertex(object *object) {
    object->vertex = (point *) calloc(1, sizeof(point));
    init_point(0, 0, 0, object->vertex);
    init_point(0, 0, 0, &object->coord_max);
    init_point(0, 0, 0, &object->coord_min);
}

// добавление вершины (1 строчка из файла)
void add_vertex(point dot, object *object) {
    object->vertex = (point *) realloc(object->vertex, object->amount_vertex + 1);
    if (object->vertex != NULL) {
        object->vertex[object->amount_vertex] = dot;
        object->amount_vertex++;
    }
    else 
        printf("realloc error\n");
}

// удаление списка всех вершин
void destroy_vertex(object *object) {
    object->amount_vertex = 0;
    init_point(0, 0, 0, &object->coord_max);
    init_point(0, 0, 0, &object->coord_min);
    if (object->vertex != NULL)
        free(object->vertex);
}

// создание структуры объекта, который хранит все
void init_object(object *object) {
    object->vertex = (point *) calloc(1, sizeof(point));
    init_vertex(object);
    int zeros[3] = {1};
    object->p = (polygon*) calloc(1, sizeof(polygon));
    init_polygon(zeros, 3, object, 0);
    object->amount_polygon = 1;
    object->amount_vertex = 1;
}

// удаление объекта
 void destroy_object(object *object) {
    for (int i = 0; i < object->amount_polygon; i++) {
        destroy_polygon(&object->p[i]);
    }
    destroy_vertex(object);
    object->amount_polygon = 0;
    object->amount_vertex = 0;
 }

// распечатывает объект
 void print_object(object *obj) {
    for (int i = 0; i < obj->amount_vertex; i++) {
        printf("v %.2lf %.2lf %.2lf\n", obj->vertex[i].x, obj->vertex[i].y, obj->vertex[i].z);
    }
    for (int i = 0; i < obj->amount_polygon; i++) {
        printf("f ");
        for (int j = 0; j < obj->p[i].amount_edges; j++)
            printf("%d ", obj->p[i].edges[j]);
        printf("\n");
    }
 }