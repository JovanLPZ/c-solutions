#include <stdio.h>

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



    



    return 0;
}