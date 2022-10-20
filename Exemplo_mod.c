#include <stdio.h>

int main()
{
    int num;
    printf("Entre com um  número inteiro de três dígitos: ");
    scanf("%d", &num);
    printf("Decompondo em centenas, dezenas e unidades: \n");
    int tmp, cn, dz, un;
    tmp = num;      // exemplo 123
    un = tmp%10;    // un <- 3   (resto da divisão)
    tmp = tmp/10;   // tmp <- 12 (divisão inteira)
    dz = tmp%10;    // dz <- 2
    cn = tmp/10;    // cn <- 1
    printf("O número %d ten %d centenas ", num, cn);
    printf("%d dezenas e %d unidades.\n", dz, un);
    return 0;
}