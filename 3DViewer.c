#include "3DViewer.h"

// создание точки
void init_point(double x, double y, double z, point *point){
    point->x = x;
    point->y = y;
    point->z = z;
}

// добавление (и создание) полигона (1 строчка из файла)
void add_polygon(int *edges, int amount_edges, object *object, int pos){
    (object->p[pos]).edges = (int*) calloc(amount_edges, sizeof(int));
    for (int i = 0; i < amount_edges; i++) {
        (object->p[pos]).edges[i] = edges[i];
    }
    (object->p[pos]).amount_edges = amount_edges;
}

// удаление полигона
void destroy_polygon(polygon *polygon) {
    polygon->amount_edges = 0;
    if (polygon->edges != NULL) 
        free(polygon->edges);
}

// создание нулевой вершины, не участвует в построении графика
void init_vertex(object *object) {
    init_point(0, 0, 0, &object->coord_max);
    init_point(0, 0, 0, &object->coord_min);
}

// добавление вершины (1 строчка из файла)
void add_vertex(point dot, object *object, int index) {
    object->vertex[index * 3] = dot.x;
    object->vertex[index * 3 + 1] = dot.y;
    object->vertex[index * 3 + 2] = dot.z;
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
void init_object(object *object, int amount_v, int amount_p) {
    object->amount_polygon = amount_p + 1;
    object->amount_vertex = amount_v + 1;
    object->vertex = (double *) calloc(object->amount_vertex * 3, sizeof(double));
    init_vertex(object);
    int zeros[3] = {0};
    object->p = (polygon*) calloc(object->amount_polygon, sizeof(polygon));
    add_polygon(zeros, 3, object, 0);
}

// удаление объекта
 void destroy_object(object *object) {
    if (object != NULL){
        for (int i = 0; i < object->amount_polygon; i++) {
            destroy_polygon(&object->p[i]);
        }
        if (object->p)
            free(object->p);
        destroy_vertex(object);
        object->amount_polygon = 0;
        object->amount_vertex = 0;
        free(object);
    }
 }

// распечатывает объект
 void print_object(object *obj) {
    for (int i = 0; i < obj->amount_vertex * 3; i += 3) {
        printf("v %.2lf %.2lf %.2lf\n", obj->vertex[i], obj->vertex[i + 1], obj->vertex[i + 2]);
    }
    for (int i = 0; i < obj->amount_polygon; i++) {
        printf("f ");
        for (int j = 0; j < obj->p[i].amount_edges; j++)
            printf("%d ", obj->p[i].edges[j]);
        printf("\n");
    }
 }