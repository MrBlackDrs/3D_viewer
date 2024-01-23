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


void s21_rotate_x(object *obj, object *obj_copy, double angle) {
    for (int i = 1; i < obj->amount_vertex; i++) {
        obj->vertex[i*3 + 0] = obj_copy->vertex[i*3 + 0];
        double y = obj_copy->vertex[i*3 + 1]; // copy_y
        obj->vertex[i*3 + 1] = cos(angle) * obj_copy->vertex[i*3 + 1] + sin(angle) * obj_copy->vertex[i*3 + 2]; // y
        obj->vertex[i*3 + 2] = -sin(angle) * y + cos(angle) * obj_copy->vertex[i*3 + 2]; // z
    }
}

void s21_rotate_y(object *obj, object *obj_copy, double angle) {
    for (int i = 1; i < obj->amount_vertex; i++) {
        double x = obj_copy->vertex[i*3]; // copy_x
        obj->vertex[i*3 + 1] = obj_copy->vertex[i*3 + 1];
        obj->vertex[i*3] = cos(angle) * obj_copy->vertex[i*3] + sin(angle) * obj_copy->vertex[i*3 + 2]; // x
        obj->vertex[i*3 + 2] = -sin(angle) * x + cos(angle) * obj_copy->vertex[i*3 + 2]; // z
    }
}

void s21_rotate_z(object *obj, object *obj_copy, double angle) {
    for (int i = 1; i < obj->amount_vertex; i++) {
        obj->vertex[i*3 + 2] = obj_copy->vertex[i*3 + 2];
        double x = obj_copy->vertex[i*3]; // copy_x
        obj->vertex[i*3] = cos(angle) * obj_copy->vertex[i*3] + sin(angle) * obj_copy->vertex[i*3 + 1]; // x
        obj->vertex[i*3 + 1] = -sin(angle) * x + cos(angle) * obj_copy->vertex[i*3 + 1]; // y
    }
}


// централизация
void s21_centralize(object *obj) {
    double centx = get_center (obj, 0);
    double centy = get_center (obj, 1);
    double centz = get_center (obj, 2);
    set_center(obj, 0, centx);
    set_center(obj, 1, centy);
    set_center(obj, 2, centz);
}

//возвращает центр, os = 0 - по оси X, 1 - по оси Y, 2 - по оси z
double get_center (object *obj, int ax) {
    double xmin = obj->vertex[1];
    double xmax = obj->vertex[1];

    for (int i = 1; i < obj->amount_vertex; i++) {
        if (obj->vertex[i * 3 + ax] > xmax) xmax = obj->vertex[i * 3 + ax];
        if (obj->vertex[i * 3 + ax] < xmin) xmin = obj->vertex[i * 3 + ax];
    }
    double centx = (xmax - xmin)/2 + xmin;
    return centx;
}

//централизует весь обьект по оси, os = 0 - по оси X, 1 - по оси Y, 2 - по оси z
void set_center(object *obj, int ax, double cent) {
    for (int i = 1; i < obj->amount_vertex; i++) {
        obj->vertex[i * 3 + ax] -= cent;
    }
}