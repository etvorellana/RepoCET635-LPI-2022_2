#include <stdio.h>
/*
Escreva um programa que 
a) Declare três variáveis de tipo char, vamos chamar de ch1, 
ch2 e ch3 mas você pode escolher outro identificador se 
achar mais apropriado; 
b) Peça ao usuário para digitar dois caracteres, obtenha-os 
da entrada padrão, usando scanf,  e atribua os valores 
digitados às variáveis ch1 e ch2 respectivamente;
c) Atribua à variável ch3 o caractere que antecede ao caractere 
ch1, imprima na tela, utilizando printf, o caractere em formato 
numérico decimal, octal, hexadecimal e como caractere; 
(caso ch3 não seja um caractere imprimível, substitua ele 
pelo caractere '_') 
d) Atribua à variável ch3 o caractere que precede ao caractere 
ch2, imprima na tela, utilizando printf, o caractere em formato 
numérico decimal, octal, hexadecimal e como caractere; 
(caso ch3 não seja um caractere imprimível, substitua ele 
pelo caractere '_') 
e) Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma 
letra maiúscula e o valor ' '(caractere espaço vazio) caso 
contrário. Use o operador condicional (?) com esta finalidade. 
Imprima o valor de ch3 na tela; 
f) Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma 
letra minúscula e o valor ' '(caractere espaço vazio) caso contrário. 
Use o operador condicional (?) com esta finalidade. 
Imprima o valor de ch3 na tela; 
g) Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere 
ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso 
contrário. Use o operador condicional (?) com esta finalidade. 
Imprima o valor de ch3 na tela;
*/

int main(void)
{
    char ch1, ch2, ch3; // declarando as variáveis
    printf("Entre dois caracteres: \n");
    printf("ch1 -> ");
    scanf("%c", &ch1);
    printf("ch2 -> ");
    scanf(" %c", &ch2);  
    //     ˆ lembre deste espaço para evitar problemas
    printf("Os caracteres fornecidos são: ch1 -> %c e ch2 -> %c\n", ch1, ch2);
    printf("c)\n"); // caractere que antecede a ch1
    ch3 = (ch1 > 32) ? ch1 - 1:'_';
    printf("ch1: dez(%d), oct(%o), hex(%x), %c\n", ch1, ch1, ch1, ch1);
    printf("ch3: dez(%d), oct(%o), hex(%x), %c\n", ch3, ch3, ch3, ch3);
    printf("d)\n"); // caractere que precede a ch2
    ch3 = (ch2 > 30) ? ch2 + 1:'_';
    printf("ch2: dez(%d), oct(%o), hex(%x), %c\n", ch2, ch2, ch2, ch2);
    printf("ch3: dez(%d), oct(%o), hex(%x), %c\n", ch3, ch3, ch3, ch3);
    printf("e)\n");// se ch1 for maiúscula
    ch3 = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : ' ';
    printf("ch1: dez(%d), oct(%o), hex(%x), %c\n", ch1, ch1, ch1, ch1);
    printf("ch3: dez(%d), oct(%o), hex(%x), %c\n", ch3, ch3, ch3, ch3);
    printf("f)\n");// se ch2 for minúscula
    ch3 = (ch2 >= 'a' && ch2 <= 'z') ? 'a' : ' ';
    printf("ch2: dez(%d), oct(%o), hex(%x), %c\n", ch2, ch2, ch2, ch2);
    printf("ch3: dez(%d), oct(%o), hex(%x), %c\n", ch3, ch3, ch3, ch3);
    printf("g)\n");// se ch1 ou ch2 forem dígitos
    ch3 = (ch1 >= '0' && ch1 <= '9') || (ch2 >= '0' && ch2 <= '9') ? '1' : ' ';
    printf("ch1: dez(%d), oct(%o), hex(%x), %c\n", ch1, ch1, ch1, ch1);
    printf("ch2: dez(%d), oct(%o), hex(%x), %c\n", ch2, ch2, ch2, ch2);
    printf("ch3: dez(%d), oct(%o), hex(%x), %c\n", ch3, ch3, ch3, ch3);
    // Uma outra forma de se fazer em duas etapas
    int dig1 = (ch1 >= '0' && ch1 <= '9') ? 1 : 0; // verdadeiro ou falso
    int dig2 = (ch2 >= '0' && ch2 <= '9') ? 1 : 0; // verdadeiro ou falso
    ch3 = dig1 || dig2 ? '1' : ' '; // se um for verdadeiro então ...
    printf("ch1: dez(%d), oct(%o), hex(%x), %c\n", ch1, ch1, ch1, ch1);
    printf("ch2: dez(%d), oct(%o), hex(%x), %c\n", ch2, ch2, ch2, ch2);
    printf("ch3: dez(%d), oct(%o), hex(%x), %c\n", ch3, ch3, ch3, ch3);
    return 0;
}