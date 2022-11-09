#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#define FIELD_X 20
#define FIELD_Y 10
#define FIGURE_X 4
#define FIGURE_Y 2
int main()
{
    void menu();
    field_t field;
    field = create_field(FIELD_X, FIELD_Y);
    print_field(&field);
}