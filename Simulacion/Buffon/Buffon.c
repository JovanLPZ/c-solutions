#include <stdio.h>
#include "pbPlots.h"
#include "supportLib.h"

int main(void)
{
    int agujas, intentos = 0, aciertos = 0, num1, num2, lineas[6] = {20, 40, 60, 80, 100, 120};
    float pi;
    srand(time(0)); //num = rand() % (10000 + 1);

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
        
        //pi = (float) aciertos / (float) intentos;
        pi = ((float) intentos / (float) aciertos) / 2;

        x[i] = i;
        y[i] = pi;
        
    }
    
    printf("El valor aproximado de PI es %.4f\n", pi);


    /*ScatterPlotSeries *series = GetDefaultScatterPlotSeriesSettings();
	series->xs = x;
	series->xsLength = 5;
	series->ys = y;
	series->ysLength = 5;
	series->linearInterpolation = true;
	series->lineType = L"dots";
	series->lineTypeLength = wcslen(series->lineType);
	series->lineThickness = 2;
	series->color = GetGray(0.3);

	ScatterPlotSettings *settings = GetDefaultScatterPlotSettings();
	settings->width = 600;
	settings->height = 400;
	settings->autoBoundaries = true;
	settings->autoPadding = true;
    settings->title = L"Aproximaciones de PI respecto a los intentos";
    settings->titleLength = wcslen(settings->title);
    settings->xLabel = L"Intentos";
    settings->xLabelLength = wcslen(settings->xLabel);
    settings->yLabel = L"Aproximacion de PI";
    settings->yLabelLength = wcslen(settings->yLabel);
    
	ScatterPlotSeries *s [] = {series};
	settings->scatterPlotSeries = s;
	settings->scatterPlotSeriesLength = 1;

	RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
	DrawScatterPlotFromSettings(canvasReference, settings);

	size_t length;
	double *pngdata = ConvertToPNG(&length, canvasReference->image);
	WriteToFile(pngdata, length, "grafica.png");
    DeleteImage(canvasReference->image);*/

    RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();

    DrawScatterPlot(imageRef, 600, 400, x, agujas, y, agujas);

    size_t length;
    double *pngData = ConvertToPNG(&length, imageRef->image);
    WriteToFile(pngData, length, "grafica.png");



    return 0;
}