#include "3DViewer.h"

int main () {
    object *obj = (object *) (calloc(1, sizeof(object)));
    char *filename = "object_files/cube.obj";
    readfile(filename, obj);
    print_object(obj);
    printf("verices: %d\tpolygons: %d", obj->amount_vertex, obj->amount_polygon);
    return 0;
} 