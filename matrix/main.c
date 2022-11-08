#include "func.h"
#include <stdio.h>
#include <stdlib.h>

#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 3

int main()
{
    matrix_t Morfius;
    Morfius = create_matrix(rows, cols);
    fill_matrix(&Morfius);
    matrix_t neo;
    neo = create_matrix(rows, cols);
    fill_matrix(&neo);
    print_matrix(&Morfius);
    print_matrix(&neo);
    /* int res = eq_size(&neo, &Morfius);
     printf("res = %d \n", res);
     int equals = eq_matrix(&neo, &Morfius);
     printf("equals = %d \n", equals);
     free_matrix(&neo);
     free_matrix(&Morfius);*/
}