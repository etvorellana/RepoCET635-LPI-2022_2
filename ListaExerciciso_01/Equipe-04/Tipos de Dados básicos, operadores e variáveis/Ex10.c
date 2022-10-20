#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2, m, n;
    printf("digite valores de x e y para o ponto 1");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("digite valores de x e y para o ponto 2");
    scanf("%d", &x2);
    scanf("%d", &y2);

    m = ((y2 - y1)/(x2-x1));

    (m == 0)? m = 1 : "";

    n = y1 - m*x1;

    printf("f(x)= %dx + %d", m, n);

    return 0;
}
