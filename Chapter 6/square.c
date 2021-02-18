#include <stdio.h>

int main(void)
{
   int n, i;

   printf("Enter number of entries in table: ");
   scanf("%d", &i);

    n = 1;

   while (n <= i)
   {
       printf("%d\t%d\n", n++, n * n);
   }
   
    

    return 0;
}