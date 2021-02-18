#include <stdio.h>

int main(void)
{
    int day1, day2, month1, month2, year1, year2, date1, date2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d / %d / %d", &day1, &month1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d / %d / %d", &day2, &month2, &year2);

    date1 = (year1 * 365) + (month1 * 31) + day1;
    date2 = (year2 * 365) + (month2 * 31) + day2;

    if (date1 > date2)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
    }
    
    else
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
    }
    

    return 0;
}