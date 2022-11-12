#ifndef _FUNC_H_
#define _FUNC_H_

#define FIELD_X 20
#define FIELD_Y 10
#define FIGURE_X 4
#define FIGURE_Y 2

typedef struct {
    char **field;
    int field_x;
    int field_y;
} field_t;

typedef struct {
    int **figure;
    int figure_x;
    int figure_y;
} figure_t;

void menu();

field_t create_field(int field_x, int field_y);
void print_field(field_t *field);
void remove_field(field_t *field);

figure_t create_figure(int figure_x, int figure_y);
void print_figure(figure_t *figure);
void remove_figure(figure_t *figure);

#endif // _FUNC_H_