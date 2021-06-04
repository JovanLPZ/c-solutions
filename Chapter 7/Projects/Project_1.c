#include <stdio.h>

int main(void)
{
    int n;

    printf("This programs prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (long i = 1; i <= n; i++)
    {
        printf("%ld\t%ld\n", i, i * i);
    }
    
    return 0;
}