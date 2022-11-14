#include "zachet.h"
#include <stdio.h>
#include <stdlib.h>

array_t create_array(const unsigned int rows, const unsigned int cols)
{
    array_t pop;
    pop.cols = cols;
    pop.rows = rows;
    pop.array = (int **)calloc(rows, sizeof(int **));
    for (unsigned int i = 0; i < rows; ++i) {
        pop.array[i] = (int *)calloc(cols, sizeof(int **));
    }
    return pop;
}

void print_array(array_t *array)
{
    for (int i = 0; i < array->rows; ++i) {
        for (int j = 0; j < array->cols; ++j) {
            printf(" %d ", array->array[i][j]);
        }
        printf("\n");
    }
}

void fill_arr(array_t *array)
{
    for (int i = 0; i < array->rows; ++i) {
        for (int j = 0; j < array->cols; ++j) {
            scanf("%d", &array->array[i][j]);
            setbuf(stdin, NULL);
        }
    }
}

int eq_size(array_t *arr, array_t *arr2)
{

    int res = 0;
    if (arr->rows == arr2->rows && arr->cols == arr2->cols) {
        res = 1;
    }
    return res;
}

array_t sum_array(array_t *arr, array_t *arr2)
{
    array_t pop;
    if (eq_size(arr, arr2)) {
        pop = create_array(arr->rows, arr->cols);
        for (int i = 0; i < arr->rows; ++i) {
            for (int j = 0; j < arr2->cols; ++j) {
                pop.array = arr->array[i][j] + arr2->array[i][j];
            }
        }
    }
    return pop;
}

array_t sorting(array_t *arr)
{
    int tmp = 0;
    for (unsigned int i = 0; i < arr->rows; ++i) {
        for (unsigned int j = 0; j < arr->cols; ++j) {
            if (arr->array[j] > arr->array[j + 1]) {
                tmp = arr->array[j];
                arr->array[j] = arr->array[j + 1];
                arr->array[j + 1] = tmp;
                tmp = arr->array[j + 1];
            }
        }
    }
}

/*int eq_array(array_t *arr, array_t *arr2)
{
    int res = 1;
    if (eq_size(arr, arr2)) {
        for (int i = 0; i < arr->rows; ++i) {
            for (int j = 0; j < arr->cols; ++j)
                if (arr->array[i][j])
        }
    }
}
*/