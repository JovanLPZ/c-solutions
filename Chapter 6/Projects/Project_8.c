#include <stdio.h>

int main(void)
{
    int day_month, day_week;

    printf("Enter number of days in month: ");
    scanf("%d", &day_month);

    printf("Enter strarting day of the week (1 = sun, 7 = sat): ");
    scanf("%d", &day_week);

    for (int i = 1; i < day_week; i++)
    {
        printf("   ");
    }
    
    for (int i = 1; i <= day_month; i++)
    {

        printf("%3d", i);
       
        if ((i + (day_week - 1)) % 7 == 0)
        {
            printf("\n");
        }
        
    }
    


    return 0;
}