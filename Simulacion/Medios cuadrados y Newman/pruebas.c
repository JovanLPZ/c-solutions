#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned long getMiddle(unsigned long number);

int main(void)
{
    unsigned long number[2] = {2152, 10};

    number[0] = pow(number[0], 2);

    number[1] = getMiddle(number[0]);

    getMiddle(number[0]);

    //printf("%lu\n", number[1]);

    return 0;
}

unsigned long getMiddle(unsigned long number)
{
    char snumber[8];
    char zero[8];

    sprintf(snumber, "%lu", number);

    int length = strlen(snumber);
    int add = 8 - length;

    for (int i = 1; i <= length; i++)
    {
        strcpy(zero, "0");
        strcat(zero, snumber);
    }

    char fnumber[4] = {zero[2], zero[3], zero[4], zero[5]};
    
    number = atoi(fnumber);

    return number;
}