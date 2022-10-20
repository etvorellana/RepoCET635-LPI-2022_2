#include <stdio.h>

/*
  2) Escreva um programa, usando quando necessário o operador (?), que:
a- Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador se achar mais apropriado; 
b- Peça ao usuário para digitar dois números inteiros, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis a e b respectivamente;
c- Atribua à variável c a somas das variáveis a e b, imprima o resultado na tela em formato octal; 
d- Atribua à variável c o produto das variáveis a e b, imprima o resultado na tela em formato hexadecimal; 
e- Atribua à variável c o módulo (valor absoluto) da diferença entre as variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0 imprimir -c) 
f- Atribua à variável c o quociente entre variáveis a e b, imprima o resultado na tela; (se b = 0 a divisão não é possível e um aviso deve ser apresentado ao usuário) 
g- Se a divisão anterior for possível, determinar se a é divisível de forma exata por b, mostrar o resultado na tela;
*/

int main(void) {
  int a, b, c; //letra A

  printf("Digite um número inteiro:\n");
  scanf("%d", &a); //letra B
  printf("Digite outro número inteiro:\n");
  scanf("%d", &b);
  
  c = a + b;
  printf("\nO resultado de %d + %d em octal é igual a %o.\n", a, b, c); //letra C
  
  c = a * b;
  printf("O resultado de %d * %d em hexadecimal é igual a %x.\n", a, b, c); //letra D
  
  c = a - b;
  c = c < 0 ? -c:c;
  printf("O módulo da diferença entre %d e %d é igual a %d.\n", a, b, c); //letra E
  
  /* c = b == 0 ? 0:a/b;
  b == 0 ? printf("Divisão não é possível."):printf("O resultado de %d / %d é igual a %d.\n", a, b, c); //letra F
  
  c = a % b == 0 ? printf("A divisão entre %d e %d é exata\n", a, b):printf("A divisão entre %d e %d NÃO é exata\n", a, b); //Letra G
*/
    c = b == 0 ? 0 : a / b;
  printf(b == 0 ? "O quociente de %d e %d não é possivel\n": "O quociente de %d e %d é %d\n", a, b, c);

  b != 0
    ? printf("%d %sé divisivel de forma exata por %d\n", a, (a % b == 0 ? "" : "não "), b)
    : 0; // Não faça nada
  return 0;
}

