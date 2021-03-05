#include <stdio.h>

int main(void)
{
    int n1, n2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (int i = 2; i <= n1 || i <= n2; i++)
    {
        if (n1 == 0 || n2 == 0)
        {
            break;
        }

        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
        
        
    }
    
    if (gcd)
    {
        printf("Greatest common divisor: %d", gcd);
    }

    else
    {
        printf("There's not any common divisor");
    }
    
    


    return 0;
}