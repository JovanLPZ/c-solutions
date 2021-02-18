#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, sum1, sum2, check_digit;


    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);     			

    sum1 = n1 + n3 + n5 + n7 + n9 + n11;
    sum2 = n2 + n4 + n6 + n8 + n10;
    check_digit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);

    printf("Check digit: %d", check_digit);
    
    return 0;
}