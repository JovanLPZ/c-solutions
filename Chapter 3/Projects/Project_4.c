#include <stdio.h>

int main(void)
{   
    int country, region, state;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &country, &region, &state);

    printf("You entered: %d.%d.%d", country, region, state);

    return 0;
}