#include "3DViewer.h"

int main() {
    object *obj = (object *) (calloc(1, sizeof(object)));
    char *filename = "object_files/katana.obj";
    readfile_to_count(filename, obj);
    // print_object(obj);
    // printf("verices: %d\tpolygons: %d\n", obj->amount_vertex, obj->amount_polygon);
    readfile_to_parse(filename, obj);
    object *obj2 = (object *) (calloc(1, sizeof(object)));
    copy_object(obj, obj2);
    printf("verices: %d\tpolygons: %d\n", obj2->amount_vertex, obj2->amount_polygon);
    print_object(obj2);
    destroy_object(obj);
    destroy_object(obj2);
    return 0;
} 