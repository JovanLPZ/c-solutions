#include <stdio.h>

int main(void)
{
    int x, polymonial;

    printf("Enter a value for \"x\": ");
    scanf("%d", &x);

    polymonial = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*(x) - 6;

    printf("Value: %d", polymonial);
    
    return 0;
}
