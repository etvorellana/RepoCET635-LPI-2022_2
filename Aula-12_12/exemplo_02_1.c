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
    for(int i = 0; i < 48; i++) 
        temp[i] = ((float)rand()/RAND_MAX)*15.0 + 20.0;
    // Suponha que o array tem foi carregado com valores
    // extraídos de um arquivo com as temperaturas num
    // estação meteorológica nas ultimas 48 horas

    // Determine:
    // a) a temperatura máxima e em qual horário aconteceu em cada dia.
    // b) a temperatura mínima e em qual horário aconteceu em cada dia.
    // c) a temperatura nédia de cada dia
    //double tMax = -100;
    double media1 = 0, media2 = 0;
    int hMax1 = 0, hMin1 = 0;
    int hMax2 = 24, hMin2 = 24;
    for(int i = 1; i < 24; i++)
    {
        media1 += temp[i];
        if(temp[i] > temp[hMax1])
            hMax1 = i;
        else if(temp[i] < temp[hMin1])
            hMin1 = i;
    } 
    for(int i = 24; i < 48; i++)
    {
        media2 += temp[i];
        if(temp[i] > temp[hMax2])
            hMax2 = i;
        else if(temp[i] < temp[hMin2])
            hMin1 =2;
    }
    media1 /= 24; //media = media / 24;
    media2 /= 24;
    // d) Guarde num array aqueles horários em que a temperatura 
    // esteve abaixo da temperatura média em cada dia
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
    return 0;
}
