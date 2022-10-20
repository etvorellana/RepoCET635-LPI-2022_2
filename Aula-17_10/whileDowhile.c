#include <stdio.h>

int main(void)
{   
    int a = 256;
    while (a < 0 || a > 255){ 
        printf("Entre com um valor inteiro entre 0 e 255: ");
        scanf("%d", &a);
        if (a < 0 || a > 255)
            printf("Valor fora do intervalo !!!!\n");
    }
    printf("%d", a);
    return 0;
}