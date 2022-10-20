#include <stdio.h>

int main(void) {
  float a, b, c, d, e, f, g, h, i;
  printf ("Digite as notas do semestre: \n");
  printf ("Prova 1 = ");
  scanf ("%f", &a);
  printf ("Prova 2 = ");
  scanf ("%f", &b);
  printf ("Prova 3 = ");
  scanf ("%f", &c);
  printf ("Prova 4 = ");
  scanf ("%f", &d);
  printf ("Prova 5 = ");
  scanf ("%f", &e);
  f = (a + b + c + d + e) / 5;
  printf ("%.2f + %.2f + %.2f + %.2f + %.2f / 5 = %.2f\n", a, b, c, d, e, f);
  printf ("Sua Nota é: %.2f\n", f);
  if (f < 7){
    printf ("Você está na prova final\n");
    printf ("Exame Final = ");
    scanf ("%2f", &g);
    h = f * 6 + g * 4;
    printf ("%.2f * 6 + %.2f * 4 = %.2f\n", f, g, h);
    i = h / 10;
    printf ("%.2f / 10 = %.2f\n", h, i);
    printf ("Sua Nota Final é: %.2f\n", i);
    if (i < 5){
      printf ("Reprovado");
    }
    else{
      printf ("Você foi aprovado");
      }
  }
  else{
    printf ("Você foi Aprovado");
  }
}