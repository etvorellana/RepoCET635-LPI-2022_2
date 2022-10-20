#include <stdio.h>

int main(void) {
  char ch1, ch2, ch3;
  printf("Digite um caractere: ");
  scanf(" %c", &ch1);

  ch1 >= '0' && ch1 <= '9'   ? printf("Esse é um dígito\n")
  : ch1 >= 'A' && ch1 <= 'Z' ? printf("Essa é uma letra maiúscula\n")
  : ch1 >= 'a' && ch1 <= 'z' ? printf("Essa é uma letra minúscula\n")
                             : printf("Esse é outro tipo de caractere\n");

  ch2 = 78;
  printf("\n%d, %o, %x, %c\n", ch2, ch2, ch2, ch2);

  ch3 = ch2 == 'N' ? 'n' : ' ';
  printf("%d, %o, %x, %c", ch3, ch3, ch3, ch3);

  return 0;
}