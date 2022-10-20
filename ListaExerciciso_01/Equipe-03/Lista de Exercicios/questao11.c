#include <stdio.h>
#include <math.h>

int main(void) {

    float cateto1, cateto2;
    float hipotenusa, perimetro, area;

    printf("Digite o valor dos dois catetos do triângulo retêngulo:\n");
    printf("Cateto 1 = ");
    scanf("%f", &cateto1);
    printf("Cateto 2 = ");
    scanf(" %f", &cateto2);

    hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
    perimetro = sqrt(hipotenusa) + cateto1 + cateto2;
    area = (cateto1 + cateto2) / 2;

    printf("Hipotenusa = %.2f\n", sqrt(hipotenusa));
    printf("Perímetro = %.2f\n", perimetro);
    printf("Área = %.2f\n", area);
    
}