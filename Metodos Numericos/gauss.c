#include <stdio.h>
#include <math.h>

int main()
{
    int  n;
    float A[20][20], c, x[10];

    printf("\nIngresa la longitud de la matriz: ");
    scanf("%d",&n);

    printf("\nIngresa los elementos de la matriz:\n");

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=(n+1); j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\n\nLa matriz ingresada fue: \n");

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=(n+1); j++)
        {
            if (j == n)
            {
                printf("%.0f|\t", A[i][j]);
            }
            else
            {
                printf("%.0f\t", A[i][j]);
            }
        }

        printf("\n");
    }

    for(int j = 1; j <= n; j++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i != j)
            {
                c = A[i][j]/A[j][j];

                for(int k = 1; k <= n+1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    } 

    printf("\nLa matriz transformada es: \n");

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=(n+1); j++)
        {
            if (j == n)
            {
                printf("%.0f|\t", fabs(A[i][j]) < 0.1f ? 0 : j == n + 1 ? A[i][n+1] / A[i][i] : A[i][i]/A[i][i]); 
            }
            else
            {
                printf("%.0f\t", fabs(A[i][j]) < 0.1f ? 0 : j == n + 1 ? A[i][n+1] / A[i][i] : A[i][i]/A[i][i]);  
            }
        }

        printf("\n");
    }

    printf("\nLa solucion es:\n");

    for(int i = 1; i <= n; i++)
    {
        x[i] = A[i][n+1] / A[i][i];
        printf("\nx%d = %.0f",i,x[i]);
    }

    return(0);
}