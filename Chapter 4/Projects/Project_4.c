#include <stdio.h>

int main(void)
{
    int num, num1, num2, num3, num4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    num1 = num % 8;
    num2 = num / 8;
    num3 = num2 / 8;
    num4 = num3 / 8;

    printf("In octal, your number is: %.2d%d%d%d", num4 % 8, num3 % 8 , num2 % 8, num1);


    return 0;
}