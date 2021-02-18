#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, x2, x3, fx1, fx2, fx3, error;
    int total_calculos, numero_calculos;
    char pregunta[100];

    printf("Instituto Tecnologico de Culiacan\nIng. en sistemas computacionales\n\n");
    printf("Jovan Lopez\nRaices de una Ecuacion - metodo de la secante\nDe 12:00 a 13:00 horas\n\n\n");
    printf("Este programa ejecuta el proceso de calculo de raices de una ecuacion utilizando el metodo de la secante\n\n");
    printf("Pregunta del problema: ");
    fgets(pregunta, sizeof(pregunta), stdin);

    printf("Intervalo del punto X1: ");
    scanf("%f", &x1);

    printf("Intervalo del punto X2: ");
    scanf("%f", &x2);

    printf("Precision del calculo: ");
    scanf("%f", &error);

    printf("Limite de iteraciones del calculo: ");
    scanf("%d", &total_calculos);


    printf("\nPregunta: %s\n", pregunta);
    printf("No     X1          X2        X3        Fx1       Fx2       Fx3\n");
    printf("---------------------------------------------------------------------------\n");

    numero_calculos = 1; 
    fx1 = x1 - ( 5 * (cos(2 * x1))) + 5; 
    fx2 = x2 - ( 5 * (cos(2 * x2))) + 5;

    do
    {
        
        x3 = x1 - (((x1 - x2) * fx1) / (fx1 - fx2));
        fx3 = x3 - ( 5 * (cos(2 * x3))) + 5;

        printf("%d %10.6f %10.6f %10.6f", numero_calculos, x1, x2, x3);
        printf("%10.6f %10.6f %10.6f\n", fx1, fx2, fx3);

        if (fabs(fx3) > error)
        {
            numero_calculos++;
            x1 = x2;
            x2 = x3;
            fx1 = fx2; 
            fx2 = fx3;
        }
        

    } while (fabs(fx3) > error && numero_calculos <= total_calculos);
    
    printf("---------------------------------------------------------------------------\n");

    if (fabs(fx3) <= error)
    {
        printf("La solucion es: %10.6f", x3);
    }
    
    if (numero_calculos >= total_calculos)
    {
        printf("No se obtuvo la raiz en %d calculos", numero_calculos);
    }
    




    return 0;
}