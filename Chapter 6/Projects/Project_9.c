#include <stdio.h>

int main(void)
{
    float amount_of_loan, interest_rate, monthly_payment;
    int payments;

    printf("Enter amount of loan: ");
    scanf("%f", &amount_of_loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Number of payments: ");
    scanf("%d", &payments);

    for (int i = 1; i <= payments; i++)
    {
        
        amount_of_loan = (amount_of_loan - monthly_payment) + (amount_of_loan * ((interest_rate / 100) / 12));
        printf("Balance remaining after payment #%d: $%.2f\n", i, amount_of_loan);

    }

    return 0;
}