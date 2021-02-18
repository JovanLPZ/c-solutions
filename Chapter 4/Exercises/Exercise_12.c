#include <stdio.h>

int main(void)
{
    int i = 5, j;
    j = ++i * 3 - 2;
    printf("a) %d %d\n", i, j); //6 16

    i = 5;
    j = 3 - 2 * i++;
    printf("b) %d %d\n", i, j); //6 -7

    i = 7;
    j = 3 * i-- + 2;
    printf("c) %d %d\n", i, j); //6 23

    i = 7;
    j = 3 + --i * 2;
    printf("d) %d %d\n", i, j); //6 15


    return 0;
}