#ifndef _ZACHET_H_
#define _ZACHET_H_

typedef struct {
    int **array;
    int rows;
    int cols;
} array_t;

array_t create_array(const unsigned int rows, const unsigned int cols);
void print_array(array_t *array);
void fill_arr(array_t *array);
int eq_size(array_t *arr, array_t *arr2);
array_t sorting(array_t *arr);
array_t sum_array(array_t *arr, array_t *arr2);

#endif //_ZACHET_H_