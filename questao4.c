#include <stdio.h>

int main () {

  printf("defina a largua em metros:");
  float largura;
  scanf("%f" , &largura);

  printf("defina o comprimento em metros:");
  float comprimento;
  scanf("%f" , &comprimento);

  float hectares= (largura * comprimento)/10000;

  printf("%s%f\n", "total de hectares:", hectares);

  return 0;

}