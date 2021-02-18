#include <stdio.h>
#include <math.h>
void presentacion(void);

int main(void)
{
    float x1, x2, x3, fx1, fx2, fx3, error;
    int total_calculos, numero_calculos;
    char pregunta[100];

    presentacion();

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

    presentacion();

    printf("Pregunta: %s\n", pregunta);
    printf("No     X1          X2        X3        Fx1        Fx2        Fx3\n");
    printf("---------------------------------------------------------------------------\n");

    numero_calculos = 1; 
    fx1 = pow(x1, 3) + (3.5f * pow(x1, 2)) - 40; 
    fx2 = pow(x2, 3) + (3.5f * pow(x2, 2)) - 40;

    do
    {
        
        x3 = x1 - (((x1 - x2) * fx1) / (fx1 - fx2));
        fx3 = pow(x3, 3) + (3.5f * pow(x3, 2)) - 40;

        printf("%d %10.6f %10.6f %10.6f", numero_calculos, x1, x2, x3);
        printf(" %10.6f  %10.6f %10.6f\n", fx1, fx2, fx3);

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
        printf("La solucion es: %.10f", x3);
    }
    
    if (numero_calculos >= total_calculos)
    {
        printf("No se obtuvo la raiz en %d calculos", numero_calculos);
    }


    return 0;
}

void presentacion(void)
{

    printf("Instituto Tecnologico de Culiacan\nIng. en sistemas computacionales\n\n");
    printf("Jovan Lopez\nRaices de una Ecuacion - Metodo de la secante\nDe 11:00 a 12:00 horas\n");
    printf("Este programa ejecuta el proceso de calculo de raices de una ecuacion utilizando el metodo de la secante\n\n");

}