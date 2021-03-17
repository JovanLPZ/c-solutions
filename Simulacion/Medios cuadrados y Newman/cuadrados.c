#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int getNumber(int number);

int main(void)
{
    int number[10000];
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

                    printf("Enter a whatever you like-digit number: ");
                    scanf("%d", &number[0]);

                    int i = 0;

                    do
                    {
                        numbersqr = pow(number[i], 2);
                        printf("%d) %d <-> %d \n", i, number, numbersqr);
                        number[i] = getNumber(numbersqr);
                        i++;

                        for (int l = 0; l < sizeof(number); l++)
                        {
                            for (int j = i + 1; j < sizeof(number); j++)
                            {
                                if (number[i] == number[j])
                                {
                                    repeated = true;
                                }
                                
                            }
                            
                        }
                        
                        number[i + 1] = getMiddle(number[i]);

                        i++;

                    } while (i < sizeof(number) || repeated != false || number[i] != 0);


                break;

                case 2:

                    number[0] = rand() % (9999 + 1000);
                    
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
                    scanf("%d", &number[0]);

                
                break;

                case 2:

                    number[0] = rand() % (9999 + 1);
                    
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

int getMiddle(int number)
{
    char snumber[8];
    char zero[8];

    sprintf(snumber, "%d", number);

    int length = strlen(snumber);
    int add = 8 - length;

    for (int i = 1; i <= length; i++)
    {
        strcpy(zero, "0");
        strcat(zero, snumber);
    }

    char fnumber[4] = {zero[2], zero[3], zero[4], zero[5]};
    
    number = atoi(fnumber);

    return number;
}