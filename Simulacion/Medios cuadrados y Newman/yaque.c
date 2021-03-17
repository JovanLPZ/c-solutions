#include <stdio.h>
#include <math.h>

int getNumber(int number);

int main(void)
{
    int number, numbersqr, i = 0;

    printf("Ingrese el numero: ");
    scanf("%d", &number);

    do
    {
        numbersqr = pow(number, 2);
        printf("%d) %d <-> %d \n", i, number, numbersqr);
        number = getNumber(numbersqr);
        i++;

    } while (i < 5);

    

    return 0;
}


int getNumber(int number)
{
    int str = 0, n = 100000, j = 3;

    do
    {
        str = str + (((number / n) % 10) * pow(10, j));
        n /= 10;
        j--;
    } while (j != 0);
    



    return str+1;
}