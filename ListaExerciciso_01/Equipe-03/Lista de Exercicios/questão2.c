#include <stdio.h>

int main(void) {

  int a, b, c;
  a = 1;
  b = 1;
  c = a + b;
 
  printf("Entre com dois números inteiros: ");
  printf("Entre com o valor de a: ");
  scanf("%d", &a);
  printf("Entre com o valor de b: ");
  scanf("%d", &b);

  c=a+b;

  printf("%d + %d = %o\n", a, b, c);
  printf("%d + %d = %x\n", a, b, c);
  printf("Entre com dois números inteiros para calcuar o módulo: ");
  printf("Entre com o valor de a: ");
  scanf("%d", &a);
  printf("Entre com o valor de b: ");
  scanf("%d", &b);

  c=a%b;
  c < 0 ? --c : c++ ;

  printf("%d % %d = %o\n", a, b, c);
  printf("Entre com dois números inteiros para calcuar o quociente: ");
  printf("Entre com o valor de a: ");
  scanf("%d", &a);
  printf("Entre com o valor de b: ");
  scanf("%d", &b);
 
  c=a/b;
  b = 0 ? printf("%d / %d = %o\n", a, b, c):printf("mão é possível");
  
 printf("%d / %d = %o\n", a, b, c);
  

  
  
  
  return 0;
}