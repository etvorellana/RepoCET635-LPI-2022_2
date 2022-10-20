#include <stdio.h>

int main(void){

  int cha;

  printf("Digite um valor inteiro: ");
  scanf("%d", &cha);

  cha = cha < 0 ? -cha : cha;
  cha = cha > 127 ? cha % 127 : cha;
  cha = cha < 32 ? 32 : cha;

  printf("Decimal: %d\n", cha);
  printf( "Octal: %o\n", cha); 
  printf("Hexadecimal: %X\n", cha);
  printf("Caractere: %c\n", cha);

  return 0;
}