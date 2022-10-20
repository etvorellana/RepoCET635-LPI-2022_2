#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    float ca=0, co=0, h=0, p=0, a=0;

    printf("Suponha um tri�ngulo ret�ngulo.\n");
    printf("\nInforme o valor do cateto adjacente: ");
    scanf("%f", &ca);
    printf("\nInforme o valor do cateto oposto: ");
    scanf("%f", &co);

    h = (ca*ca) + (co*co);
    printf("\nA hipotenusa do tri�ngulo � igual a %.2f.\n", sqrt(h));

    p = sqrt(h) + ca + co;
    printf("O per�metro do tri�ngulo � igual a %.2f.\n", p);

    a = (ca * co) / 2;
    printf("A �rea do tri�ngulo � igual a %.2f.\n", a);

    return 0;
}
