#include <stdio.h>

/*
    Escreva um programa que leia os valores (x, y) de um ponto 
    do plano e informe em qual quadrante o ponto se encontra. 
    Use apenas o operador condicional (?). Lembre que um ponto, 
    no plano cartesiano, pode estar no primeiro quadrante 
    ( se x> 0 e y>0), no segundo quadrante ( se x<0 e y>0), 
    no terceiro quadrante ( se x<0 e y<0), no quarto quadrante 
    (se x>0 e y<0) ou sobre um dos eixos (caso x=0 ou y=0).
*/

int main(void)
{
    float x, y;
    printf("Entre o par de coordenadas de um ponto no plano cartesiano: \n");
    printf("x -> ");
    scanf("%f", &x);
    printf("y -> ");
    scanf("%f", &y);
    printf("O ponto (%.2f, %.2f) est: ", x, y);
    (x == 0 || y == 0) ? printf("Sobre um dos eixos do plano\n") :
        (x > 0 && y > 0) ? printf("No primeiro quadrante\n") :
             (x < 0 && y > 0) ? printf("No segundo quadrante\n") :
                (x < 0 && y < 0) ? printf("No terceiro quadrante\n") :
                    printf("No quarto quadrante\n");
    return 0;
}