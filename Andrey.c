#include "3DViewer.h"

int main () {
    object *object;
    char *filename = "object_files/cube.obj";
    readfile(filename, object);
    print_object(object);
    return 0;
}