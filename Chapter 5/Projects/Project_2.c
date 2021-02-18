#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%2d :%2d", &hour, &minute);

    if (hour < 11)
    {
        printf("Equivalent 12-hour time: %d:%.2d AM", hour == 0 ? 12 : hour, minute);
    }
  
    else
    {
        printf("Equivalent 12-hour time: %d:%.2d PM", hour == 12 ? 12 : hour - 12, minute);
    }

    
    

    return 0;
}