#include <stdio.h>
#include <math.h>

#define RESISTENCIA_AIRE 12.5f
#define GRAVEDAD 9.8f
#define E 2.718281f

int main(void)
{
    float masa, velocidad, velocidad_anterior;

    printf("\nIngrese la masa del paracaidista: ");
    scanf("%f", &masa);

    printf("\nTiempo(s)\tVelocidad(m/s)\n");

    int t = 2;
    do
    {
        velocidad = ((GRAVEDAD * masa) / RESISTENCIA_AIRE) * (1 - pow(E, -(RESISTENCIA_AIRE / masa) * t));
        velocidad_anterior = ((GRAVEDAD * masa) / RESISTENCIA_AIRE) * (1 - pow(E, -(RESISTENCIA_AIRE / masa) * (t - 2)));

        printf("%d\t\t%.4f\n", t, velocidad);

        t+=2;

    } while ((velocidad - velocidad_anterior) > 0.000001f );
    
    
    

    return 0;
}