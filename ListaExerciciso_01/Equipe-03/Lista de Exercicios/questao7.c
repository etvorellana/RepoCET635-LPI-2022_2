#include <stdio.h>
#include <stdlib.h>


int main()
{
  
   int n, x, a;
  
   printf("Insira um valor ");
   scanf("%i", &x);
 
   n = x * (x+1)/2;
   a = x*(-1) * ((x*(-1))+1)/2;
 
   x < 0 ? printf("VALOR %i",a) : printf("VALOR %i", n);
 
   return 0;
}