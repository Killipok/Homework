#include "zachet.h"
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int rows = 0;
    int cols = 0;
    printf("Введите размер [][]");
    printf("\n");
    scanf("%d", &rows);
    scanf("%d", &cols);

    printf("Заполните");
    printf("\n");

    array_t arr;
    arr = create_array(rows, cols);

    array_t arr2;
    arr2 = create_array(rows, cols);

    fill_arr(&arr);
    fill_arr(&arr2);

    print_array(&arr);
    printf("\n");

    print_array(&arr2);
    printf("\n");

    // array_t sorting(array_t * arr);

    printf("Сумма матриц - \n");
    array_t sum = sum_array(&arr, &arr2);
    print_array(&sum);
}
