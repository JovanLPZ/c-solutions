#include <stdio.h>

int main(void)
{
    printf("Size of\n");
    printf("Int: %zu\n", sizeof(int));
    printf("Short: %zu\n", sizeof(short));
    printf("Long: %zu\n", sizeof(long));
    printf("Float: %zu\n", sizeof(float));
    printf("Double: %zu\n", sizeof(double));
    printf("Long double: %zu\n", sizeof(long double));


    return 0;
}