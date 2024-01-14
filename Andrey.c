#include "3DViewer.h"

int main () {
    object *object;
    char *filename = "object_files/cube.obj";
    readfile(filename, object);
    print_object(object);
    printf("verices: %d\tpolygons: %d", object->amount_vertex, object->amount_polygon);
    return 0;
}