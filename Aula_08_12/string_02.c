#include <stdio.h>
#include <string.h>

int contaEsp(char string[]);

int main(void)
{
    char str1[] =    "Isto e uma STRING!!!";
    char str2[100] = "Isto e outra STRING!!!";
    char *str3 = str1;
    char str4[100];
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("Entre com uma STRING: ");
    //gets(str4);
    fgets(str4, 100, stdin);
    printf("A sua STRING é: %s\n", str4);
    // Quantos espaços em branco eu tenho na STRING
    int contEsp = contaEsp(str1);
    
    printf("A STRING de tamanho %d tem %d espaços em branco\n", strlen(str1), contEsp);
    // Quantos espaços em branco eu tenho na STRING 
    contEsp = contaEsp(str2);
    
    printf("A STRING de tamanho %d tem %d espaços em branco\n", strlen(str2), contEsp);
    return 0;
}

int contaEsp(char string[])
{
    int i = 0, contEsp = 0;
    while(string[i] != '\0'){
        if(string[i] == ' ')
            contEsp++;
        i++;
    }
    return contEsp;
}

int contaEspLen(char string[])
{
    int i = 0, contEsp = 0;
    int strSize = strlen(string);
    for(i = 0; i < strSize; i++)
        if(string[i] == ' ')
            contEsp++;
    }
    return contEsp;
}