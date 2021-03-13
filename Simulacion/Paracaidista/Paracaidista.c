#include <stdio.h>
#include <math.h>
#include "pbPlots.h"
#include "supportLib.h"

#define RESISTENCIA_AIRE 12.5f
#define GRAVEDAD 9.8f
#define E 2.718281f

int main(void)
{
    float masa, velocidad, velocidad_anterior;

    double x[60], y[100];

    printf("\nIngrese la masa del paracaidista: ");
    scanf("%f", &masa);

    printf("\nTiempo(s)\tVelocidad(m/s)\n");

    int t = 0, j = 0;
    do
    {
        velocidad = ((GRAVEDAD * masa) / RESISTENCIA_AIRE) * (1 - pow(E, -(RESISTENCIA_AIRE / masa) * t));
        velocidad_anterior = ((GRAVEDAD * masa) / RESISTENCIA_AIRE) * (1 - pow(E, -(RESISTENCIA_AIRE / masa) * (t - 2)));

        printf("%d\t\t%.4f\n", t, velocidad);

        x[j] = t;
        y[j] = velocidad;
        t+=2, ++j;


    } while ((velocidad - velocidad_anterior) > 0.000001f );
    
    RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();

    DrawScatterPlot(imageRef, 600, 400, x, 38, y, 38);

    size_t length;
    double *pngData = ConvertToPNG(&length, imageRef->image);
    WriteToFile(pngData, length, "grafica.png");
    

    return 0;
}