#include <stdio.h>
#include <math.h>

/*
8) Escreva um programa que 
a- Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode 
escolher outro identificador se achar mais apropriado; 
b- Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf,  
e atribua os valores digitados às variáveis x e y respectivamente;
c- Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da 
curva f(x) = 5x + 2 se encontra (esquerda, direita ou na curva). Imprima o resultado na tela; 
d- Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro 
de coordenadas;(distância euclidiana se calcula como x2+y2, pode utilizar a função sqrt() 
fornecida no arquivo de cabeçalho math.h) 
e- Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica; 
*/

int main(void) {
  //Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode escolher outro identificador se achar mais apropriado
  float w, y, x, z;
  printf("f(x) = 5 * x + 2\n");
  //Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis x e y respectivamente
  printf("X = "); scanf ("%f", &x);
  printf("Y = "); scanf ("%f", &y);
  //Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda, direita ou na curva). Imprima o resultado na tela
  w = 5*x+2;
    printf("Resultado =%.2f\n", w);
  w==x ? printf("Esta na linha\n") : printf("Nao esta na linha\n");
  w>x ? printf("Encontra-se a direita da linha\n") : printf("Nao esta a direta da linha\n");
  w<x ? printf("Encontra-se a esquerda da linha\n") : printf("Nao esta a esquerda da linha\n");
  //Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas, (distância euclidiana se calcula como raiz de x ao quadrado +y ao quadrado, pode utilizar a função sqrt() fornecida no arquivo de cabeçalho math.h) 
//Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica
  //O %e é pra imprimir o resultado da multiplicação de x por y em notação científica
  z= sqrt (x*x+y*y);
  printf("A distancia de z: %f\n", z);
  z= (x*y);
    printf("Resultado de z: %e\n", z);
  return 0;
}

//gcc exercicio8.c -o exercicio8 -lm