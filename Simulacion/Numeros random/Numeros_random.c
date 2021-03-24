#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sw;
    srand(time(0));

    printf("Genereacion de numeros pseudoaleatorios.\n\n");

    do
    {
        
    printf("1) Ingresar numero por teclado\n2) Generar un numero random\n");
    printf("\nDigite la opcion deseada: ");
    scanf("%d", &sw);

    switch (sw)
    {

        case 1:

            printf("\nIngrese el numero: ");
            scanf("%d", &num);

            for (int i = 1; i <= num; i++)
            {
                printf("%d.- %.4f\n",i, ((float)rand())/RAND_MAX);
            }
            
        break;
        
        case 2:

        num = rand() % (10000 + 1);

        for (int i = 1; i <= num; i++)
            {
                printf("\n%d.- %.4f",i, ((float)rand())/RAND_MAX);
            }

        break;

        default:
        break;
    }

    printf("\nDesea intentar de nuevo? (0 = No, 1 = Si): ");
    scanf("%d", &sw);

    } while (sw != 0);
    
    
    return 0;
}