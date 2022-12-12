#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

int main(void)
{
    // declarando um array
    double temp[N];
    srand(time(NULL));
    // inicializando o array
    for(int i = 0; i < 24; i++) 
        temp[i] = ((float)rand()/RAND_MAX)*15.0 + 20.0;
    // Suponha que o array tem foi carregado com valores
    // extraídos de um arquivo com as temperaturas num
    // estação meteorológica nas ultimas 24 horas

    // Determine:
    // a) a temperatura máxima e em qual horário aconteceu.
    // b) a temperatura mínima e em qual horário aconteceu..
    // c) a temperatura nédia do dia
    //double tMax = -100;
    double media = 0;
    int hMax = 0, hMin = 0;
    for(int i = 1; i < 24; i++)
    {
        //if (temp[i] > tMax)
        media += temp[i];
        if(temp[i] > temp[hMax])
        {
            //tMax = temp[i];
            hMax = i;
        }else if(temp[i] < temp[hMin]){
            hMin = i;
        }
    } 
    media /= 24; //media = media / 24;
    printf("A temperatura máxima foi de %.2f e aconteceu às %d horas\n", ,);
    printf("A temperatura mínima foi de %.2f e aconteceu às %d horas\n", ,);
    printf("A temperatura média foi de %.2f\n", );
    // d) Guarde num array aqueles horários em que a temperatura 
    // esteve abaixo da temperatura média
    int horas[N];
    int j = 0;
    for(int i = 0; i < 24; i++)
    {
        if (temp[i] < media)
        {
            horas[j] = i;
            j++;
        }
    }
    printf("Nos seguintes horários a temperatura esteve abaixo\n ");
    printf("da temperatura média": \n ");
    //...
    return 0;
}
