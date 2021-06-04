#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;

    printf("Enter a message: ");

    do
    {
        ch = getchar();
        i++;
        
    } while (ch != '\n');

    printf("Your message was %d character(s) long.\n", i);
    

    return 0;
}