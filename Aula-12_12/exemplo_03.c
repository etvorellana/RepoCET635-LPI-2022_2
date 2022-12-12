#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

int main(void)
{
    // declarando um array
    double temp[7][N];
    srand(time(NULL));
    // inicializando o array
    for (j = 0; j < 7; j++)
        for(int i = 0; i < 24 i++) 
            temp[j][i] = ((float)rand()/RAND_MAX)*15.0 + 20.0;
    // Suponha que o array tem foi carregado com valores
    // extraídos de um arquivo com as temperaturas num
    // estação meteorológica na última semana colocando 
    // cada dia numa linha, começando pela segunda feira.

    // Determine:
    // a) a temperatura máxima e em qual horário aconteceu em cada dia.
    // b) a temperatura mínima e em qual horário aconteceu em cada dia.
    // c) a temperatura nédia de cada dia
    //double tMax = -100;
    double media[7]; // = {0, 0, 0, 0, 0, 0, 0};    
    int hMax[7], hMin[7];
    for(int j = 0; j < 7; j++)
    {
        hMax[j] = hMin[j] = j*24;
        media[j] = 0;
        for(int i = 1; i < 24; i++)
        {
            media[j] += temp[j][i];
            if(temp[j][i] > temp[j][hMax[j]])
                hMax[j] = i;
            else if(temp[j][i] < temp[j][hMin[j]])
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
