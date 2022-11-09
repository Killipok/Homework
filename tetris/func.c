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
    for (unsigned int i = 0; i < field_x; ++i) {
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
