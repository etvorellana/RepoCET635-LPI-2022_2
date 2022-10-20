#include <stdio.h>

/*
1) Escreva um programa que:
a- Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3  mas você pode escolher outro identificador se achar mais apropriado;
b- Peça ao usuário para digitar um caractere, obtenha o mmesmo da entrada padrão, usando scanf,  e atribua o valor digitado à variável ch1;
c- Verifique, utilizando o operador condicional (?) se se trata de:
  um dígito;
  um caractere maiúsculo;
  um caractere minúsculo;
  outro tipo de caractere;
d- Atribua à variável ch2 o caractere 78 e identifique é imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;
e- Dado que o caractere ch2 é uma letra maiúscula, atribua à variável ch3 o caractere que corresponde à mesma letra minúscula (não pode procurar na tabela ASCII); 
f- Imprima ch3 na tela, utilizando printf, em formato numérico  decimal, octal, hexadecimal e como caractere;
*/

int main(void) {
  char ch1, ch2, ch3; //letra A

  printf("Entre com um caractere:\n");
  scanf("%c", &ch1); //letra B
  printf("%c\n", ch1);

  ch1 = (ch1 >= '0' && ch1 <= '9') ? printf("%c é um dígito.\n", ch1):(ch1 >= 'A' && ch1 <= 'Z') ? printf("%c é um caractere maiúsculo.\n", ch1):(ch1 >= 'a' && ch1 <= 'z') ? printf("%c é um caractere minúsculo.\n", ch1): printf("%c é um outro tipo de caractere.\n", ch1); //letra C
  
  ch2 = 78; //letra D
  printf("%d, %o, %x, %c\n", ch2, ch2, ch2, ch2);

  ch3 = ch2 + 32; //letra E
  printf("%d, %o, %x, %c\n", ch3, ch3, ch3, ch3); //letra F
  return 0;
}