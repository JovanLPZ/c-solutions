#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height, lenght, width, weight, volume;

    printf("Height: ");
    scanf("%d", &height);
    printf("Lenght: ");
    scanf("%d", &lenght);
    printf("Width: ");
    scanf("%d", &width);

    volume = height * lenght * width;
    weight = (volume + (INCHES_PER_POUND - 1)) / 166;    

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}