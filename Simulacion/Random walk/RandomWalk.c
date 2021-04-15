#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef short Coordenada;

int main(void)
{
    Coordenada x = 0, y = 0;
    short simulaciones, exitos;
    float probabilidad; 
    srand(time(0));

    printf("Ingrese el numero de simulaciones a realizar: ");
    scanf("%hd", &simulaciones);

    printf("\nSimulacion\tCuadra\tProbabilidad\tCoordenadas\tExito\n");

    for (int i = 1; i <= simulaciones; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            probabilidad = ((float)rand())/RAND_MAX;

            if (probabilidad <= 0.25f) //Norte
            {
                ++y;
            }
            else if (probabilidad <= 0.50f) //Sur
            {
                --y;
            }
            else if (probabilidad <= 0.75f) //Este
            {
                ++x;
            }
            else if (probabilidad <= 1) //Oeste
            {
                --x;
            }

            if (j == 1)
            {
                printf("%4d\t\t", i);
            }
            else
            {
                printf("%4s\t\t", "-");
            }
            

            printf("%4d\t%8.2f\t%4s%hd,%hd)\t%s", j, probabilidad, "(", x, y, "  ");

            if (j == 10 && (fabs(x) + fabs(y)) >= 2)
            {
                printf("%s\n", "Si");
                exitos++;
            }
            else if (j == 10)
            {
                printf("%s\n", "No");
            }
            else
            {
                printf("%s\n", "-");
            }
                
    
            
            
        }

        x = y = 0;
        
    }

    printf("\nLa probabilidad de que el borracho quede a 2 cuadras es: %%%.0f \n", 100 * (float) exitos/simulaciones);
    



    return 0;
}