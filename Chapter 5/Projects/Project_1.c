#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter a number: ");
    scanf("%4d", &n);

    if (n >= 0 && n <= 9)
    {
        printf("The number %d has 1 digit", n);
    }

    else if (n >= 10 && n <= 99)
    {
        printf("The number %d has 2 digit", n);
    }

    else if (n >= 100 && n <= 999)
    {
        printf("The number %d has 3 digit", n);
    }

    else if (n >= 1000 && n <= 9999)
    {
        printf("The number %d has 4 digit", n);
    }
    

    return 0;
}
