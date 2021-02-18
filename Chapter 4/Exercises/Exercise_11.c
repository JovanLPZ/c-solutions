#include <stdio.h>

int main(void)
{
    int i = 1, j, k;

    printf("a) %d", i++ - 1);         //0 2
    printf(" %d\n", i);    

    i = 10; j = 5;
    printf("b) %d", i++ - ++j);       //4 11 6
    printf(" %d %d\n", i, j);         

    i = 7, j = 8;
    printf("c) %d", i++ - --j);       //0 8 7
    printf(" %d %d\n", i, j);         

    i = 3, j = 4, k = 5;
    printf("d) %d", i++ - j++ + --k); //3 4 5 4
    printf(" %d %d %d\n", i, j, k);   

    return 0;
}