#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, sum1, sum2, check_digit;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &n1); 

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6);     			

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n7, &n8, &n9, &n10, &n11);

    sum1 = n1 + n3 + n5 + n7 + n9 + n11;
    sum2 = n2 + n4 + n6 + n8 + n10;
    check_digit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);

    printf("Check digit: %d", check_digit);
    
    return 0;
}
