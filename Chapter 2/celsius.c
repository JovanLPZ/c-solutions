#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsious;

    printf("Enter fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsious = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsious equivalent: %.0f", celsious);
    
    return 0;
}