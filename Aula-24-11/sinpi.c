#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 0;
    int i = 0;
    while(x <= 3.14){
        printf("sin(%.2f) = f%.2f\n",x, sin(x));
        i++;
        x = i*0.2;
    }


    x = 0;
    while(x <= 3.14){
        printf("sin(%.2f) = f%.2f\n",x, sin(x));
        x += 0.2;
    }
    for(x = 0; x <= 3.14; x += 0.2 )
    {
        printf("sin(%.2f) = f%.2f\n",x, sin(x));
    }
    char ch;
    for(ch = 'A', i = 1; ch <= 'Z'; ch++, i++)
    {
        printf("%c", ch);
        if(i%7 == 0)
            printf("\n");
    }

    return 0;
}