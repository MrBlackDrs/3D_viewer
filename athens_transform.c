#include "3DViewer.h"

void s21_normalize(object *obj) {
    double max_v = 0.0;
    for (int i = 3; i < obj->amount_vertex * 3; i++) {
        if (fabs(obj->vertex[i]) > max_v) max_v = obj->vertex[i];
    }
    for (int i = 1; i < obj->amount_vertex * 3; i++) {
        obj->vertex[i] /= max_v;
    }
}


void s21_change_scale(object *obj, double coef) {
    for (int i = 0; i < obj->amount_vertex * 3; i++) {
        obj->vertex[i] *= coef;
    }
}

void s21_shift(object *obj, double value, int os) {
    for (int i = 1; i < obj->amount_vertex; i++) {
        obj->vertex[i*3 + os] += value;
    }
}


void s21_rotate_x(object *obj, double angle) {
    for (int i = 1; i < obj->amount_vertex; i++) {

        obj->vertex[i*3 + 1] = cos(angle) * obj->vertex[i*3 + 1] + sin(angle) * obj->vertex[i*3 + 2]; // y
        obj->vertex[i*3 + 2] = -sin(angle) * obj->vertex[i*3 + 1] + cos(angle) * obj->vertex[i*3 + 2]; // z
    }
}

void s21_rotate_y(object *obj, double angle) {
    for (int i = 1; i < obj->amount_vertex; i++) {

        obj->vertex[i*3] = cos(angle) * obj->vertex[i*3] + sin(angle) * obj->vertex[i*3 + 2]; // x
        obj->vertex[i*3 + 2] = -sin(angle) * obj->vertex[i*3] + cos(angle) * obj->vertex[i*3 + 2]; // z
    }
}

void s21_rotate_z(object *obj, double angle) {
    for (int i = 1; i < obj->amount_vertex; i++) {

        obj->vertex[i*3] = cos(angle) * obj->vertex[i*3] + sin(angle) * obj->vertex[i*3 + 1]; // x
        obj->vertex[i*3 + 1] = -sin(angle) * obj->vertex[i*3] + cos(angle) * obj->vertex[i*3 + 1]; // y
    }
}
