#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height, lenght, width, volume;

    printf("Height: ");
    scanf("%d", &height);
    printf("Lenght: ");
    scanf("%d", &lenght);
    printf("Width: ");
    scanf("%d", &width);

    volume = height * lenght * width;
       
    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", ((volume + (INCHES_PER_POUND - 1))/166) );

    return 0;
}