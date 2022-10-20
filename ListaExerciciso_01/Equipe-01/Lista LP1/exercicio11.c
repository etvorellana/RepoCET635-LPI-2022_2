#include <stdio.h>
#include <math.h>

/*
  11) Escreva um programa que leia da entrada padrão o tamanho dos catetos de um triângulo retângulo e imprima:
a- O tamanho do quadrado da hipotenusa;
b- O arquivo de cabeçalho math.h inclui a função sqrt() que retorna a raiz quadrada do parâmetro de entrada. 
c- O valor do perímetro do triângulo;
d- O valor da área do referido triângulo;
*/

int main(void) {
  float cat1, cat2, hipot, perimetro, area;
  printf("Digite o tamanho do 1º cateto:\n");
  scanf("%f", &cat1);
  printf("Digite o tamanho do 2º cateto:\n");
  scanf("%f", &cat2);
  hipot = (cat1 * cat1) + (cat2 * cat2);
  printf("A hipotenusa equivale a %.2f cm\n", sqrt(hipot));
  printf("E o quadrado da hipotenusa equivale a %.2f cm\n", (hipot)); //letra A
  perimetro = cat1 + cat2 + hipot; //letra B
  printf("O perímetro equivale a %.2f cm\n", perimetro);
  area = (cat1 * cat2)/2; //letra C
  printf("A área equivale a %.2f cm²\n", area);
  return 0;
}

//gcc exercicio11.c -o exercicio11 -lm