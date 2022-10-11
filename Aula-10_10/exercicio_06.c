#include <stdio.h>
#include <math.h>

/*
    Escreva um programa que leia da entrada padrão o raio 
    de um círculo e imprima:
    a) Seu diâmetro; 
    b) O valor de sua circunferência (perímetro);
    c) Sua área.

*/

int main(void)
{
    // Aqui vamos usar alguns recursos da math.h
    // podemos definir o valor de pi como
    const double pi = 3.1415;
    double raio, diam, peri, area;
    printf("Entre com o raio do círculo: ");
    scanf("%lf", &raio); //repare no 
    diam = 2 * raio;
    // podemos usar nossa constante pi
    peri = pi * diam; // mesma coisa de 2 * pi * raio
    // ou usar a contante definida no math.h
    area = M_PI * pow(raio, 2); // descubra que faz a função pow
    printf("R = %.4f, D = %.4f, P = %.4f, A = %.4f\n", raio, diam, peri, area); 
    return 0;
}