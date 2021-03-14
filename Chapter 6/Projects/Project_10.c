#include <stdio.h>

int main(void)
{
    int day, month, year, date, earliest = (99 * 365) + (12 * 31) + 31, eday, emonth, eyear;

    
    do
    {
        
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d / %d / %d", &month, &day, &year);

        date = (year * 365) + (month * 31) + day;

        if(date < earliest && date != 0)
        {
            earliest = date;

            eday = day;
            emonth = month;
            eyear = year;
        }

    } while (date != 0);


    printf("\n%.2d/%.2d/%.2d is the earliest date", emonth, eday, eyear);

    return 0;
}
