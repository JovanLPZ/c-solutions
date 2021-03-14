#include <stdio.h>

int main(void)
{
    int value;

    float e = 1.0f;

    printf("Enter a value to calculate 'e': ");
    scanf("%d", &value);

    for (int i = 1, f = 1; i <= value; i++)
    {
        f *= i;
        e += 1.0f/(f);
    }
    
    printf("The value of 'e' is: %f", e);

    return 0;
}