#include <stdio.h>

int main(void)
{
    int i = 3, j = 4, k = 5;
    
    printf("a) %d\n", i < j || ++j < k); //1 
    printf("%d %d %d\n", i, j, k);

    i = 7; j = 8; k = 9;
    printf("b) %d\n", i - 7 && j++ < k); //0
    printf("%d %d %d\n", i, j, k);

    i = 7; j = 8; k = 9;
    printf("c) %d\n", (i = j) || (j = k)); //1
    printf("%d %d %d\n", i, j, k);

    i = 1; j = 1; k = 1;
    printf("d) %d\n", ++i || ++j && ++k); //1
    printf("%d %d %d\n", i, j, k);


    return 0;
}