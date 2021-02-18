#include <stdio.h>

int main(void)
{
    int area_code;

    scanf("%d", &area_code);

    switch (area_code)
    {
        case 229:
        printf("City name: Albany");
        break;

        case 404:
        case 470:
        case 678:
        case 770:
        printf("City name: Atlanta");
        break;

        case 706:
        case 762:
        printf("City name: Columbus");
        break;

        case 912:
        printf("City name: Salvannah");
        break;
    
        default:
        printf("Area code not recognized");
        break;
    }

    
    return 0;
}
