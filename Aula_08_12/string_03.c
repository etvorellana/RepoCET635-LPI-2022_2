#include <stdio.h>
#include <string.h>

void ordString(char str1[], char str2[]);

int main(void)
{
    char str1[] = "Isto é uma STRING!!!";
    char str2[100] = "Isto é outra STRING!!!";
    char *str3 = str1;
    char str4[100];
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("Entre com uma STRING: ");
    fgets(str4, 100, stdin);
    printf("A sua STRING é: %s\n", str4);
    // quero copiar o conteúdo de str4 para str2
    printf("%s\n", str2);
    strcpy(str2, str4);
    printf("%s\n", str2);

    strcpy(str1, "Rafael");
    strcpy(str2, "Guilherme");
    strcpy(str4, "Esbel");
    printf("Inicial\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str4);
    
    ordString(str1, str2);
    printf("Primeira Troca\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str4);

    ordString(str2, str4);
    printf("Segunda Troca\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str4);

    ordString(str1, str2);
    printf("Final\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str4);
    
    return 0;
}

void ordString(char str1[], char str2[])
{
    char strT[100];
    if(strcmp(str1, str2) > 0){
        strcpy(strT, str1);
        strcpy(str1, str2);
        strcpy(str2, strT);
    }
}