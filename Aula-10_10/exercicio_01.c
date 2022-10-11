#include <stdio.h>

/*
    Escreva um programa que 
    a) Declare três variáveis de tipo int, vamos chamar de a, b e c 
    mas você pode escolher outro identificador se achar mais 
    apropriado; 
    b) Peça ao usuário para digitar dois números inteiros, obtenha-os 
    da entrada padrão, usando scanf,  e atribua os valores digitados 
    às variáveis a e b respectivamente;
    c) Atribua à variável c o valor da expressão 4*a + b / 3 - 5;  
    d) Atribua à variável c o valor da expressão 4*(a + b) / (3 - 5);
    e) Justifique por que os resultados destas expressões são diferentes,
    demonstre implementando outra variação da mesma expressão que gere 
    resultado diferente;  
    f) Utilizando o último valor calculado de c, recalcule o valor da mesma 
    utilizando a expressão a2 + 2*b + c , imprima o resultado na tela;
*/

int main(void)
{   
    int a, b, c; // a) declarando as variáveis
    // lenda os valores de a e b
    printf("Entre com dois valores inteiros: \n");
    //scanf("%d %d", &a, &b); // pode ser assim ou ...
    printf("a -> ");
    scanf("%d", &a);
    printf("b -> ");
    scanf("%d", &b);  // ... assim
    printf("Os valores fornecidos são: a = %i, b = %d\n", a, b);
    // calculando o primeiro valor de c
    c = 4 * a + b / 3 - 5;
    printf("4 * %d + %d / 3 - 5 -> %d\n", a, b, c);
    printf("Segundo a precedência dos operadores: \n");
    printf("1 - Primeiro * e / de esquerda para direita:\n");
    printf("1.1 - 4 * %d -> %d\n", a, 4 * a);
    printf("1.2 - %d / 3 -> %d\n", b, b / 3);
    printf("2 - Depois + e - de esquerda para direita:\n");
    printf("2.1 - %d + %d -> %d\n", 4 * a, b / 3, 4 * a + b / 3);
    printf("2.2 - %d - 5 -> %d\n", 4 * a + b / 3, 4 * a + b / 3 - 5);
    // calculando o segundo valor de c
    c = 4 * (a + b) / (3 - 5);
    printf("4 * (%d + %d) / (3 - 5) -> %d\n", a, b, c);
    printf("Segundo a precedência dos operadores: \n");
    printf("1 - Primeiro resolve os parêntesis:\n");
    printf("1.1 - %d + %d -> %d\n", a, b, a + b);
    printf("1.2 - 3 - 5-> %d\n", 3 - 5);
    printf("2 - Depois * e / de esquerda para direita:\n");
    printf("2.1 - 4 * %d -> %d\n", (a + b), 4 * (a + b));
    printf("2.2 - %d / %d -> %d\n", 4 * (a + b), 3 - 5, 4 * (a + b) / (3 - 5));
    // propondo uma nova expressão 
    c = (4 * a + b) / 3 - 5;
    printf("(4 * %d + %d) / 3 - 5 -> %d\n", a, b, c);
    printf("Segundo a precedência dos operadores: \n");
    printf("1 - Primeiro resolve o parêntesis:\n");
    printf("1.1 - Primeiro *:\n");
    printf("1.1.1 - 4 * %d - > %d\n", a, 4 * a);
    printf("1.2 - Depois +:\n");
    printf("1.2.1 - %d + %d -> %d\n", 4 * a, b, 4 * a + b);
    printf("2 - Depois /:\n");
    printf("2.1 - %d / 3 -> %d\n", 4 * a + b, (4 * a + b) / 3);
    printf("3 - Finalmente - :\n");
    printf("3.1 - %d - 5 -> %d\n", (4 * a + b) / 3, (4 * a + b) / 3 - 5);
    // recalculando c
    // imprimindo o valor de c antes de modificar
    printf("%d * %d + 2 * %d + %d -> ", a, a, b, c);
    c = a * a + 2 * b + c;
    printf("%d\n", c); // imprimindo o resultado final
    return 0;
}