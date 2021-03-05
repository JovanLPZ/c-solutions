#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, x2, x3, fx1, fx2, f1dx1, error;
    int total_calculos, numero_calculos;
    char pregunta[100];

    printf("\nInstituto Tecnologico de Culiacan\nIng. en sistemas computacionales\n\n");
    printf("Jovan Lopez\nMetodo de Newton Raphson - Raices de una ecuacion\nDe 11:00 a 12:00 horas\n");
    printf("Este programa ejecuta el proceso de calculo de raices de una ecuacion utilizando el metodo de Newton Raphson.\n\n");


    printf("Pregunta del problema: ");
    fgets(pregunta, sizeof(pregunta), stdin);

    printf("Intervalo de inicio: ");
    scanf("%f", &x1);

    printf("Precision del calculo: ");
    scanf("%f", &error);

    printf("Limite de iteraciones del calculo: ");
    scanf("%d", &total_calculos);



    printf("\nPregunta: %s\n", pregunta);
    printf("No     X1          F(X1)        F'(X1)        X2        F(X2) \n");
    printf("----------------------------------------------------------------\n");

    numero_calculos = 1; 
    fx1 = pow(x1, 3) + (3.5f * pow(x1, 2)) - 40; 
    

    do
    {
        f1dx1 = (3 * pow(x1, 2)) + (7 * x1);
        x2 = x1 - (fx1 / f1dx1);
        fx2 = (pow(x2, 3) + (3.5f * pow(x2, 2)) - 40); 

        printf("%d %10.6f    %10.6f   %10.6f", numero_calculos, x1, fx1, f1dx1);
        printf("  %10.6f  %10.6f \n", x2, fx2);

        if (fabs(fx2) > error)
        {
            numero_calculos++;
            x1 = x2;
            fx1 = fx2;

        }
        

    } while (fabs(fx2) > error && numero_calculos <= total_calculos);
    
    printf("---------------------------------------------------------------------------\n");

    if (fabs(fx2) <= error)
    {
        printf("\nLa solucion es: %.10f", x2);
    }
    
    if (numero_calculos >= total_calculos)
    {
        printf("\nNo se obtuvo la raiz en %d calculos", numero_calculos);
    }


    return 0;
}
