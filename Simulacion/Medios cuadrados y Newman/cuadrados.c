#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int getNumber(int number);

int main(void)
{
    int number;
    int numbersqr;
    short sw;
    bool repeated = false;
    srand(time(0));

    printf("Genereacion de numeros pseudoaleatorios con el metodo de los medios cuadrados y Newman.\n\n");

    printf("1) Medios cuadrados\n2) Newman\n");
    printf("\nDigite la opcion deseada: ");
    scanf("%hd", &sw);

    switch (sw)
    {

        case 1:
            
            printf("\nHa elegido el metodo de medios cuadrados");
            printf("\n1) Ingresar numero por teclado\n2) Generar un numero random\n");
            printf("\nDigite la opcion deseada: ");
            scanf("%hd", &sw);

            switch (sw)
            {
                case 1:

                    printf("\nIngrese el numero: ");
                    scanf("%d", &number);

                    int i = 0;

                    do
                    {
                        numbersqr = pow(number, 2);
                        printf("%d) %d <-> %d \n", i, number, numbersqr);
                       

                        /*for (int l = 0; l < sizeof(number); l++)
                        {
                            for (int j = i + 1; j < sizeof(number); j++)
                            {
                                if (number[i] == number[j])
                                {
                                    repeated = true;
                                }
                                
                            }
                            
                        }*/
                        
                        number = getNumber(numbersqr);

                        i++;

                    } while (i < sizeof(number) || repeated != false || number != 0);


                break;

                case 2:

                    number = rand() % (9999 + 1000);
                    
                break;
                
                default:
                break;
            }



        break;

        case 2:

            printf("\nHa elegido el metodo de Newman");
            printf("\n1) Ingresar numero por teclado\n2) Generar un numero random\n");
            printf("\nDigite la opcion deseada: ");
            scanf("%hd", &sw);

            switch (sw)
            {
                case 1:
                
                    printf("\nIngrese el numero: ");
                    scanf("%d", &number);

                
                break;

                case 2:

                    number = rand() % (9999 + 1);
                    
                break;
                
                default:
                break;
            }
            
        break;
        
        default:
        break;

    }





    return 0;
}

int getNumber(int number)
{
    int str = 0, n = 100000, j = 3;

    do
    {
        str = str + (((number / n) % 10) * pow(10, j));
        n /= 10;
        j--;
    } while (j != 0);
    

    return str+1;
}