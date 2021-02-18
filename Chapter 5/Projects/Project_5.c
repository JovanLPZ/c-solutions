#include <stdio.h>

int main(void)
{
    int tax;

    printf("Enter the amount of taxable income: ");
    scanf("%d", &tax);

    if (tax < 750)
    {
        tax = (tax * 0.01f);
    }

    else if (tax <= 2250)
    {
        tax = 7.50f + ((tax - 750) * 0.02f);
    }
    
    else if (tax <= 3750)
    {
        tax = 37.50f + ((tax - 2250) * 0.03f);
    }

    else if (tax <= 5250)
    {
        tax = 82.50f + ((tax - 3750) * 0.04f);
    }

    else if (tax <= 7000)
    {
        tax = 142.50f + ((tax - 5250) * 0.05f);
    }

    else
    {
        tax = 230 + ((tax - 7000) * 0.06f);
    }
    
    printf("Tax due: %d", tax);

    return 0;
}