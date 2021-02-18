#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, largest, smallest, large1, small1, large2, small2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        large1 = n1;
        small1 = n2;
    }

    else 
    {
        large1 = n2;
        small1 = n1;
    }

    if (n3 > n4)
    {
        large2 = n3;
        small2 = n4;
    }

    else 
    {
        large2 = n4;
        small2 = n3;
    }

    if (large1 > large2)
    {
        largest = large1;
    }

    else 
    {
        largest = large2;
    }

    if (small1 < small2)
    {
        smallest = small1;
    }

    else 
    {
        smallest = small2;
    }
    

    printf("Largest: %d\n", largest);
    printf("Smallest: %d", smallest);
    

    return 0;
}