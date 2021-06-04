#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This programs prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%d\t%d\n", i, i * i);

        if (i % 24 == 0)
        {
            printf("\nPress Enter To Continue...\n");
            while (getchar() != '\n');
        }
        
    }
    
    return 0;
}