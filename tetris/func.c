#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void menu()
{
    int res = 0;
    while (res != 2) {
        printf("menu\n 1.START\n 2.EXIT\n");
        scanf("%d", &res);
        setbuf(stdin, NULL);
        switch (res) {
        case 1:
            /* code */
            break;

        default:
            break;
        }
    }
}

field_t create_field(int field_x, int field_y)
{
    field_t field;
    field.field_x = field_x;
    field.field_y = field_y;
    field.field = (char **)calloc(field_x, sizeof(char *));
    for (int i = 0; i < field_x; ++i) {
        field.field[i] = (char *)calloc(field_y, sizeof(char));
    }
    for (int i = 0; i < field_x; ++i) {
        for (int j = 0; j < field_y; ++j) {
            /* code */
        }
    }

    return field;
}

void print_field(field_t *field)
{
    for (int i = 0; i < field->field_x; ++i) {
        for (int j = 0; j < field->field_y; j++) {
            printf("%c", field->field[i][j]);
        }
        printf("\n");
    }
}

void remove_field(field_t *field)
{
    for (int i = 0; i < field->field_x; ++i) {
        free(field->field[i]);
    }
    free(field->field);
}

figure_t create_figure(int figure_x, int figure_y)
{
    figure_t figure;
    figure.figure_x = figure_x;
    figure.figure_y = figure_y;
    figure.figure = (int **)calloc(figure_x, sizeof(int *));
    for (int i = 0; i < figure_x; ++i) {
        figure.figure[i] = (int *)calloc(figure_y, sizeof(int));
    }
    for (int i = 0; i < figure_x; ++i) {
        for (int j = 0; j < figure_y; ++j) {
        }
    }
    return figure;
}

void print_figure(figure_t *figure)
{
    for (int i = 0; i < figure->figure_x; ++i) {
        for (int j = 0; j < figure->figure_y; j++) {
            printf("%c", figure->figure[i][j]);
        }
        printf("\n");
    }
}

void remove_figure(figure_t *figure)
{
    for (int i = 0; i < figure->figure_x; ++i) {
        free(figure->figure[i]);
    }
    free(figure->figure);
}
