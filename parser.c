#include "3DViewer.h"



void readfile(char *filename, object *object) {
    init_object(object);
    point dot;
    double x, y, z;
    FILE *f = fopen(filename, "r");
    char str[256] = "";
    if (f != NULL) {
        while (fgets(str, 256, f) != NULL) {
            if (strncmp(str, "v ", 2) == 0) { // ищем вершины
                sscanf(str, "v %lf %lf %lf", &x, &y, &z);
                init_point(x, y, z, &dot);
                add_vertex(dot, object);
            }
            else if (strncmp(str, "f ", 2) == 0) {
                sscanf(str, "f %lf %lf %lf", &x, &y, &z);
            }
            char str[256] = "";
            // printf("%s\n", str);
            // работа со строкой и обновление структуры object
        }
        fclose(f);
    }
}