#include "3DViewer.h"

int main() {
    object *obj = (object *) (calloc(1, sizeof(object)));
    char *filename = "object_files/cube.obj";
    readfile_to_count(filename, obj);
    print_object(obj);
    printf("verices: %d\tpolygons: %d\n", obj->amount_vertex, obj->amount_polygon);
    readfile_to_parse(filename, obj);
    print_object(obj);
    destroy_object(obj);
    return 0;
} 