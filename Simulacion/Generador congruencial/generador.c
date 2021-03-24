#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int primeNumber(int n);

int main(void)
{
    int a, k, x, c, m, sw, ls[1000];
    bool repeated = false;
    srand(time(0));

    for (int i = 0; i < sizeof(ls)/sizeof(ls[0]); i++)
    {
        ls[i] = -1;
    }
    
    printf("Generador congruencial\n\n");

    //Calcular a
    printf("Calcular 'a'\n");
    printf("1) Por teclado, 2) Numero random: ");
    scanf("%d", &sw);

    switch (sw)
    {
        case 1:

            printf("\nDigite el valor de 'k' para calcular 'a' (Impar no divisible por 3 o 5): ");
            scanf("%d", &k);

            a = pow(2, k) + 1;

            while(a % 3 == 0 || a % 5 == 0 || a <= 0)     
            {
                printf("\nDigite un valor correcto para 'k' para calcular 'a' (Impar no divisible por 3 o 5): ");
                scanf("%d", &k);

                a = pow(2, k) + 1;
            }

        break;

        case 2:

            k = rand() % (20 + 1);

            while( pow(2, k) + 1  % 3 == 0  || pow(2, k) + 1 % 5 == 0 || k <= 0)
            {
                    k = rand() % (100 + 1);
            }

            a = pow(2, k) + 1;

            printf("\n'a' es igual a %d", a);

        break;
    }

    //Calcular x
    printf("\nCalcular 'x'\n");
    printf("1) Por teclado, 2) Numero random: ");
    scanf("%d", &sw);

    switch (sw)
    {
        case 1:

            printf("\nDigite un valor positivo de 'x': ");
            scanf("%d", &x);

            while(x <= 0)
            {
                printf("\nDigite un valor correcto para 'x': ");
                scanf("%d", &x);
            }

        break;

        case 2:

            x = rand() % (100 + 1);

            printf("\n'x' es igual a: %d", x);

        break;
    }

    //Calcular c
    printf("\nCalcular 'c'\n");
    printf("1) Por teclado, 2) Numero random: ");
    scanf("%d", &sw);

    switch (sw)
    {
        case 1:

            printf("\nDigite un valor para calcular 'c' (Su residuo entre 8 debe ser 5): ");
            scanf("%d", &c);

            while(c % 8 != 5)
            {
                printf("\nDigite un valor correct para calcular 'c' (Su residuo entre 8 debe ser 5): ");
                scanf("%d", &c);
            }

        break;

        case 2:

            c = rand() % (100 + 1);

            while(c % 8 != 5)
            {
                c = rand() % (100 + 1);
            }

            printf("\n'c' es igual a: %d", c);

        break;
    }
    
    //Calcular m
    printf("\nCalcular 'm'\n");
    printf("1) Por teclado, 2) Numero random: ");
    scanf("%d", &sw);

    switch (sw)
    {
        case 1:

            printf("\nDigite un valor para 'm' (primo menor a 2^15(32,768)): ");
            scanf("%d", &m);

            while(!primeNumber(m) && m > 32768)
            {
                printf("\nDigite un valor correcto para 'm' (primo menor a 2^15(32,768)): ");
                scanf("%d", &m);
            }

        break;

        case 2:

            m = rand() % (32768 + 1);

            while(!primeNumber(m) && m > 32768)
            {
                    m = rand() % (32768 + 1);
            }

            printf("\n'm' es igual a: %d", m);

        break;
    }

    printf("\nLos valores asignados son:\n");
    printf("a = %d\n", a);
    printf("x = %d\n", x);
    printf("c = %d\n", c);
    printf("m = %d\n\n", m);

    //Imprimir numeros

    printf("n\tx\tax + c\t (ax + c) / m\tx");
    printf("\n------------------------------------------\n");

    for (int i = 0; repeated == false; i++)
    {
        printf("%d\t", (i + 1));

        printf("%d\t  ", x); 

        x = (a * x) + c;
        printf("%d\t   ", x); 

        // (a * x) + c / m
        printf("%d/%d \t", x, m); 

        x %= m;
        printf("%d\n", x);

        for (int j = 0; j < sizeof(ls)/sizeof(ls[0]); j++)
        {
            if (x == ls[j])
            {   

                //printf("\n%d == %d\n", x, ls[j]);
                repeated = true;
                break;
            } 
        }

        ls[i] = x;
    }

    return 0;
}

int primeNumber(int n)
{
    int i, flag = 0;

    for (i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
    } 

    if (n == 1)
    {
        return 0;
    }

    else
    {
        if (flag == 0)
        {
            return 1;
        }
        
        else
        {
            return 0;
        }
    }
}