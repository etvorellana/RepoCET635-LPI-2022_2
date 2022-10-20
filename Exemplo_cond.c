#include <stdio.h>


int main(){

    const short int true = 1, false = 0;
    printf("Usando o operador condicional (?)\n");
    printf("Trata-se de um operador binário, ou seja: \n");
    char ch;
    printf("Entre com um caractere: ");
    scanf("%c", &ch);
    /*
        Vamos descobrir se o caractere é uma letra ou um
        número (caractere alfanumérico)
    */
    int eAlpha = false;
    eAlpha = (ch >= 'A' && ch <= 'Z')?true:false;
    eAlpha = (ch >= 'a' && ch <= 'z')?true:false;
    eAlpha = (ch >= '0' && ch <= '9')?true:false;
    
    printf("Podemos ignorar o resultado da expressão ...\n ");
    (eAlpha == true) ? printf("Caractere Alfanumérico\n") : printf("Não\n");
    
    printf("A implementação anterior nõ funciona!!!");
    printf("Sabe por que?\n");
    printf("Podemos utilizar todas as condições em uma única operação\n");
    eAlpha = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ? true:false;
    (eAlpha == true) ? printf("Caractere Alfanumérico\n") : printf("Não\n");
    
    printf("Ou podemos combinar vários operadores condicionais ...\n");
    eAlpha = false;
    eAlpha = (ch >= 'A' && ch <= 'Z') ? true:
        (ch >= 'a' && ch <= 'z') ? true :
            (ch >= '0' && ch <= '9') ? true : false;  
    (eAlpha == true) ? printf("Caractere Alfanumérico\n") : printf("Não\n");
    return 0;
}