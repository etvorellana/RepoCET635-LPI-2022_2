#include <stdio.h>

/*
    Escreva um programa que 
    a) Declare três variáveis de tipo double, vamos chamar de 
    x, y e z mas você pode escolher outro identificador se 
    achar mais apropriado; 
    b) Peça ao usuário para digitar dois números de ponto 
    flutuante, obtenha-os da entrada padrão, usando scanf,  
    e atribua os valores digitados às variáveis x e y 
    respectivamente;
    c) Atribua à variável z a somas das variáveis x e y, 
    imprima o resultado na tela; 
    d) Atribua à variável z a média das variáveis x e y, 
    imprima o resultado na tela; 
    e) Atribua à variável z o produto entre as variáveis 
    x e y, imprima o resultado na tela; 
    f) Atribua à variável z o maior valor entre as variáveis 
    x e y, imprima o resultado na tela; 
    g) Atribua à variável z o menor valor entre as variáveis 
    x e y, imprima o resultado na tela;
*/

int main(void)
{
    float x, y, z; // declarando as variáveis
    // lendo dois valores float do teclado
    printf("Entre com dois valores de ponto flutuante\n");
    printf("x -> ");
    scanf("%f", &x);
    printf("y -> ");
    scanf("%f", &y);
    // calculando a soma de x e y
    z = x + y;
    // exemplos de formatação de float
    printf("%f + %.2f = %.4f\n", x, y, z);
    // calculando a media de x e y (x + y)/2
    z /= 2;
    printf("media = %.4f\n", z);
    // calcula o produto
    z = x * y;
    printf("%.4f * %.3f = %.2f\n", x, y, z);
    // determinando o maior valor entre x e y
    z = (x > y) ? x : y;
    printf("O maior valor entre %f e %f é %f\n", x, y, z);
    // determinando o menor valor entre x e y
    z = (x < y) ? x : y;
    printf("O menor valor entre %f e %f é %f\n", x, y, z);
    return 0;
}