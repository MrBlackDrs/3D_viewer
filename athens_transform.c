#include "3DViewer.h"

void normalize(object *obj) {
    double max_v = 0.0;
    for (int i = 1; i < obj->amount_vertex * 3; i++) {
        if (fabs(obj->vertex[i]) > max_v) max_v = obj->vertex[i];
    }
    for (int i = 1; i < obj->amount_vertex * 3; i++) {
        obj->vertex[i] /= max_v;
    }
}


