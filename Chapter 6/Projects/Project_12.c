#include <stdio.h>

int main(void)
{
    int value, f = 1;

    float snumber, e = 1.0f;

    printf("Enter a value to calculate 'e': ");
    scanf("%d", &value);

    printf("Enter a small number: ");
    scanf("%d", &snumber);

    for (int i = 1; 1.0f/(f) > snumber; i++)
    {
        f *= i;
        e += 1.0f/(f);
    }
    
    printf("The value of 'e' is: %f", e);

    return 0;
}