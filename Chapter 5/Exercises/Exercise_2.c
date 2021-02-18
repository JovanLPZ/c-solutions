#include <stdio.h>

int main(void)
{
    int i = 10, j = 5, k;
    
    printf("a) %d\n", !i < j); //1

    i = 2; j = 1;
    printf("b) %d\n", !!i < !j); //0

    i = 5; j = 0; k = -5;
    printf("c) %d\n", i && j || k); //1

    i = 1; j = 2; k = 3;
    printf("d) %d\n", i < j || k); //1


    return 0;
}