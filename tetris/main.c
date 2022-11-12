#include "func.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    void menu();
    field_t field;
    figure_t figure;
    field = create_field(FIELD_X, FIELD_Y);
    print_field(&field);
    figure = create_figure(FIGURE_X, FIGURE_Y);
    print_figure(&figure);
}