#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("The reversal is: ");

    for (int i = 1; i < num; i++)
    {
        printf("%d", i);
    }
    
    

    return 0;
}