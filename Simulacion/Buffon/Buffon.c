#include <stdio.h>
#include "pbPlots.h"
#include "supportLib.h"

int main(void)
{
    int agujas, intentos = 0, aciertos = 0, num1, num2, lineas[6] = {20, 40, 60, 80, 100, 120};
    float pi;
    srand(time(0));

    printf("Digite el numero de intentos: ");
    scanf("%d", &agujas);

    double x[agujas], y[agujas];


    for (int i = 0; i < agujas; i++)
    {
        num1 = rand() % (140 + 1);
        num2 = rand() % (140 + 1);

        if(num1 > num2)
        {
            int aux;
            aux = num1;
            num1 = num2;
            num2 = aux;

        }

        while (num2 - num1 != 20)
        {
            num1 = rand() % (140 + 1);
            num2 = rand() % (140 + 1);

            if(num1 > num2)
            {
                int aux;
                aux = num1;
                num1 = num2;
                num2 = aux;

            }

        }

        for (int j = 0; j < sizeof(lineas)/sizeof(lineas[0]); j++)
        {
            if (lineas[j] > num1 && lineas[j] < num2)
            {
                intentos++;
                aciertos++;
            }

            else
            {
                intentos++;
            }
        }
        
        pi = ((float) intentos / (float) aciertos) / 2;

        x[i] = i;
        y[i] = pi;
        
    }
    
    printf("El valor aproximado de PI es %.4f\n", pi);


    ScatterPlotSeries *series = GetDefaultScatterPlotSeriesSettings();
	series->xs = x;
	series->xsLength = agujas;
	series->ys = y;
	series->ysLength = agujas;
	series->linearInterpolation = false;
	series->pointType = L"dots";
	series->pointTypeLength = wcslen(series->pointType);
	series->lineThickness = 1;
	series->color = CreateRGBColor(0, 0, 1) ;

	ScatterPlotSettings *settings = GetDefaultScatterPlotSettings();
	settings->width = 1600;
	settings->height = 900;
	settings->autoBoundaries = true;
	settings->autoPadding = true;
    settings->title = L"Aproximaciones de PI respecto a los intentos";
    settings->titleLength = wcslen(settings->title);
    settings->xLabel = L"Aproximacion de PI";
    settings->xLabelLength = wcslen(settings->xLabel);
    settings->yLabel = L"Intentos";
    settings->yLabelLength = wcslen(settings->yLabel);
    
	ScatterPlotSeries *s [] = {series};
	settings->scatterPlotSeries = s;
	settings->scatterPlotSeriesLength = 1;

	RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlotFromSettings(canvasReference, settings);


    double x1 = MapXCoordinateAutoSettings(0, canvasReference->image, x, 10);
    double y1 = MapYCoordinateAutoSettings(3.1416, canvasReference->image, y, 10);

    double x2 = MapXCoordinateAutoSettings(agujas, canvasReference->image, x, 10);
    double y2 = MapYCoordinateAutoSettings(3.1416, canvasReference->image, y, 10);

    DrawLine(canvasReference->image, x1, y1, x2, y2, 2, GetGray(0.3));

	size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "grafica.png");
    DeleteImage(canvasReference->image);

    return 0;
}