#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    float ca=0, co=0, h=0, p=0, a=0;

    printf("Suponha um triângulo retângulo.\n");
    printf("\nInforme o valor do cateto adjacente: ");
    scanf("%f", &ca);
    printf("\nInforme o valor do cateto oposto: ");
    scanf("%f", &co);

    h = (ca*ca) + (co*co);
    printf("\nA hipotenusa do triângulo é igual a %.2f.\n", sqrt(h));

    p = sqrt(h) + ca + co;
    printf("O perímetro do triângulo é igual a %.2f.\n", p);

    a = (ca * co) / 2;
    printf("A área do triângulo é igual a %.2f.\n", a);

    return 0;
}
