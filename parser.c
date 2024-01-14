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
                char *vertex_index = NULL;
                vertex_index = strtok(str + 2, " ");
                int digit = 0;
                int len = 1, cur_index = 0;
                int *str_index = calloc(sizeof(int), 1);
                while (vertex_index != NULL) {
                    digit = atoi(vertex_index);
                    if (digit) {
                        if (cur_index == len) {
                            str_index = (int *) realloc(str_index, len + 1);
                            len++;
                        }
                        str_index[cur_index] = digit;
                        cur_index++;
                    }
                    else
                        printf("incorrect obj file\n");
                    vertex_index = strtok(NULL, " ");
                }
                add_polygon(str_index, len, object);
            }
            char str[256] = "";
            // printf("%s\n", str);
            // работа со строкой и обновление структуры object
        }
        fclose(f);
    }
}