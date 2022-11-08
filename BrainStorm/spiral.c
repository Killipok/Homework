#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
    int arr[SIZE][SIZE];
    int num = 1;
    int rows1 = 0;
    int cols1 = 0;
    int rows2 = SIZE - 1;
    int cols2 = SIZE - 1;
    while (num <= (SIZE * SIZE)) {
        for (int i = cols1; i <= cols2; i++) {
            arr[rows1][i] = num++;
        }

        for (int j = rows1 + 1; j <= rows2; j++) {
            arr[j][cols2] = num++;
        }

        for (int i = cols2 - 1; i >= cols1; i--) {
            arr[rows2][i] = num++;
        }

        for (int j = rows2 - 1; j >= rows1 + 1; j--) {
            arr[j][cols1] = num++;
        }
        rows1++;
        rows2--;
        cols1++;
        cols2--;
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
