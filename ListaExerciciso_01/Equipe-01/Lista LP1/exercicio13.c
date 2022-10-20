#include <stdio.h>

/*
  13) Escreva um programa que: 
a- Leia da entrada padrão as notas dos 5 créditos da disciplina CET635-LPI e calcule a média do semestre. Imprima o resultado na tela;
b- dependendo da média calculada anteriormente, determine se o aluno está de prova final ou não;
c- se o aluno estiver de prova final, leia a nota da prova final e calcule a média do semestre;
d- Imprima a nota final do aluno na disciplina;
*/

int main(void) {
  float crd1, crd2, crd3, crd4, crd5, media, prvfinal, notafinal;
  printf("Nota 1: ");
  scanf("%f", &crd1);
  printf("Nota 2: ");
  scanf("%f", &crd2);
  printf("Nota 3: ");
  scanf("%f", &crd3);
  printf("Nota 4: ");
  scanf("%f", &crd4);
  printf("Nota 5: ");
  scanf("%f", &crd5);

  media = (crd1 + crd2 + crd3 + crd4 + crd5)/5;
  printf("A média desse aluno é %.2f\n", media); //letra A

  media >= 7 ? printf("Aluno aprovado!\n"):printf("Aluno reprovado e está na prova final. Insira o valor da prova final: "); //letra B
  media < 7 ? scanf("%f", &prvfinal): 0; //letra C

  notafinal = ((media * 6) + (prvfinal * 4))/10;
  media < 7 ? printf("A média final desse aluno foi %.2f\n", notafinal): 0; //letra D
  return 0;
}