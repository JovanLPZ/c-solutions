#include <stdio.h>

int main(void)
{
    int x, polymonial;

    printf("Enter a value for \"x\": ");
    scanf("%d", &x);

    polymonial = ((((3*x + 2) * x - 5) * x - 1) * x + 7)* x - 6;

    printf("Value: %d", polymonial);
    
    return 0;
}