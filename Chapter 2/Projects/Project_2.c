#include <stdio.h>

#define FRACTION 4.0f / 3.0f
#define PI 3.141598f 

int main(void)
{
    int radious;

    printf("Enter the radious of the sphere (meters): ");
    scanf("%d", &radious);

    float volume = (FRACTION * (PI * (radious * radious * radious)));

    printf("Volume of the sphere (meters): %.2f\n", volume); 
    
    return 0;
}
