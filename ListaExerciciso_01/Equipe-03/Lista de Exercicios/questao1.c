#include <stdio.h>

int main(void)
{
  char ch1, ch2, ch3;

  printf("Insira um caractere: ");
  scanf("%c", &ch1);

  int digito = (ch1 >= '0' || ch1 <= '9');
  int maiusculo = (ch1 >= 'A' || ch1 <= 'Z');
  int minusculo = (ch1 >= 'a' || ch1 <= 'z');
  int outro = !digito && !maiusculo && !minusculo;

  printf(digito ? "%c é um digito\n" : "%c não é um digito\n", ch1);
  printf(maiusculo ? "%c é uma letra maiuscula\n" : "%c não é uma letra maiuscula\n", ch1);
  printf(minusculo ? "%c é uma letra minuscula\n" : "%c não é uma letra minuscula\n", ch1);
  printf(outro ? "%c é outro tipo de caractere\n" : "%c não é outro tipo de caractere\n", ch1);

  ch2 = 78;
  printf("Decimal: %d\n", ch2);
  printf("Octal: %o\n", ch2);
  printf("Hexadecimal: %X\n", ch2);
  printf("Caractere: %c\n", ch2);

  ch3 = ch2 + 32;
  printf("Decimal: %d\n", ch3);
  printf("Octal: %o\n", ch3);
  printf("Hexadecimal: %X\n", ch3);
  printf("Caractere: %c\n", ch3);
  
  return 0;
}