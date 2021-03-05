#include <stdio.h>

int main(void)
{
    int n,c;
    
   do
   {

    scanf("%d", &n);
    
    
    for (int d = 2; d * d <= n; d++)
    {
       if (n % d == 0)
       {
          break;
       }   

       if (d < n)
       {
           printf("%d is divisible by %d\n", n, d);  
       }
       
       else
       {
           printf("%d is prime\n", n);
       }

    }

   } 
   while (n != 0);

    
    return 0;
}