#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    printf("RAND_MAX = %d\n", RAND_MAX);
    for(int i = 1; i < 21; i++){
        //srand(time(NULL));
        printf("%d ", rand()%6 + 1);
        if(i % 5 == 0)
            printf("\n");
    }
    return 0;
}