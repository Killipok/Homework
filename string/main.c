#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 12

int main()
{
    // memcpy
    /* int a[SIZE] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
     unsigned index = 0;

     printf("Введите индекс для удаления \n");
     scanf("%d", &index);
     index = index < SIZE ? index : SIZE - 1;
     memcpy(&a[index], &a[index + 1], sizeof(int) * (SIZE - index - 1));
     for (int i = 0; i < SIZE - 1; ++i) {
         printf("%d ", a[i]);
     }*/

    // strcat
    char pop[255] = "жопый";
    char cot[255] = "черно";
    strcat(cot, pop);
    printf("%s\n", cot);

    // strcpy
    char pap[255] = "что-то написано";
    char cat[255] = "";
    strcpy(cat, pap);
    printf("%s\n", cat);

    // strchr
    char ppp[255] = "qwerty";
    int ch = 'q';
    char *ach;
    ach = strchr(ppp, ch);

    if (ach == NULL) {
        printf("Символ не найден\n");
    } else {
        printf("Символ в строке на позиции # %ld\n", ach - ppp + 1);
    }

    // strcmp
    char pip[255] = "12345";
    char cit[255] = "12345";
    if (strcmp(pip, cit) == 0) {
        printf("Строки идентичны\n");
    } else {
        printf("Строки отличаются\n");
    }

    // strlen
    char pp[255] = "12345";
    printf("Длина строки - %ld символов\n", strlen(pop));

    // strncat
    char kot[255] = "222";
    char kot2[255] = "123";
    char dop[10] = "999";
    printf("dop: %s\n", dop);
    strncat(kot, dop, 3);
    printf("pop1 %s\n", kot);
}
