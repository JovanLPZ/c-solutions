#include <stdio.h>

int main(void)
{
    int amount, bills;

    printf("Enter a dollar amount: $ ");
    scanf("%d", &amount);
    
    bills = amount / 20;
    amount -= (20*bills);
    printf("$20 Bills: %d\n", bills);

    bills = amount / 10;
    amount -= (10*bills);
    printf("$10 Bills: %d\n", bills);

    bills = amount / 5;
    amount -= (5*bills); 
    printf("$5 Bills: %d\n", bills);

    bills = amount / 1;
    amount -= (1*bills);
    printf("$1 Bills: %d\n", bills);

    return 0;
}