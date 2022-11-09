#ifndef _FUNC_H_
#define _FUNC_H_

typedef struct {
    char **field;
    int field_x;
    int field_y;
} field_t;

void menu();

field_t create_field(int field_x, int field_y);
void print_field(field_t *field);

#endif // _FUNC_H_