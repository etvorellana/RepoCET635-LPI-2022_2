#include <stdio.h>

int main(void)
{   
    int pal, lap = 0;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &pal);

    int x = pal;
    int d;
    while(x != 0)
    {
        d = x % 10;
        x /= 10;
        lap = lap*10 + d;
        
    }
    printf ("pal = %d, lap = %d\n", pal, lap);
    if(pal == lap)
        printf("%d é um palindromo\n", pal);
    else
        printf("%d não é um palindromo\n", pal);
    return 0;
}