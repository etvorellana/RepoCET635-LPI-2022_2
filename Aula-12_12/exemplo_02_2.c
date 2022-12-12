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
    double media[2] = {0, 0};    
    int hMax[2] = {0, 24}, hMin[2] = {0, 24};
    for(int j = 0; j < 2; j++)
    {
        for(int i = 1; i < 24; i++)
        {
            media[j] += temp[i];
            if(temp[i] > temp[hMax[j]])
                hMax[j] = i;
            else if(temp[i] < temp[hMin[j]])
                hMin[j] = i;
        }
        media[j] /= 24; //media = media / 24;
    }
    
    
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
