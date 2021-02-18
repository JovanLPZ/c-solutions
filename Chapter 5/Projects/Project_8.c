#include <stdio.h>

int main(void)
{
    int hour, minutes, time, departure_hour, departure_minute, arrive_hour, arrive_minute,
        time1, time2, time3, time4, time5, time6, time7, time8;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minutes);

    hour = (hour * 60) + minutes;

    time1 = (8 * 60) + (((9 * 60) + 43) - (8 * 60));
    time2 = ((9 * 60) + 43) + (((11 * 60) + 19) - ((9 * 60) + 43));
    time3 = ((11 * 60) + 19) + (((12 * 60) + 43) - ((11 * 60) + 19));
    time4 = ((12 * 60) + 47) + (((14 * 60)) - ((12 * 60) + 47));
    time5 = ((14 * 60)) + (((3 * 60) + 45) - ((14 * 60)));
    time6 = ((15 * 60) + 45) + (((19 * 60)) - ((15 * 60) + 45));
    time7 = ((19 * 60)) + (((21 * 60) + 45) - ((19 * 60)));
    time8 = ((21 * 60) + 45) + (((32 * 60)) - ((21 * 60) + 45));

    if (hour <= time1)
    {
        departure_hour = 8;
        departure_minute = 0;

        arrive_hour = 10;
        arrive_minute = 16;
    }
    
    else if (hour <= time2)
    {
        departure_hour = 9;
        departure_minute = 43;

        arrive_hour = 11;
        arrive_minute = 52;
    }
    
    else if (hour <= time3)
    {
        departure_hour = 11;
        departure_minute = 19;

        arrive_hour = 13;
        arrive_minute = 31;
    }
     
    else if (hour <= time4)
    {
        departure_hour = 12;
        departure_minute = 47;

        arrive_hour = 15;
        arrive_minute = 0;
    }    

    else if (hour <= time5)
    {
        departure_hour = 14;
        departure_minute = 0;

        arrive_hour = 16;
        arrive_minute = 8;
    }

    else if (hour <= time6)
    {
        departure_hour = 15;
        departure_minute = 45;

        arrive_hour = 17;
        arrive_minute = 55;
    }

    else if (hour <= time7)
    {
        departure_hour = 19;
        departure_minute = 0;

        arrive_hour = 21;
        arrive_minute = 20;
    }

    else if (hour <= time8)
    {
        departure_hour = 21;
        departure_minute = 45;

        arrive_hour = 23;
        arrive_minute = 58;
    }


   if (departure_hour < 11)
    {
        printf("Closest departure time is %d:%.2d AM, ", departure_hour == 0 ? 12 : departure_hour, departure_minute);
    }
  
    else
    {
        printf("Closest departure time is %d:%.2d PM, ", departure_hour == 12 ? 12 : hour - 12, departure_minute);
    }

     if (arrive_hour < 11)
    {
        printf("arriving at %.2d:%.2d AM", arrive_hour == 0 ? 12 : arrive_hour, arrive_minute);
    }
  
    else
    {
        printf("arriving at %d:%.2d PM", arrive_hour == 12 ? 12 : arrive_hour - 12, arrive_minute);
    }

    
    

    return 0;
}