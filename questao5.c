#include <stdio.h>

int main () {

  printf("peso em quilos:");
  float peso;
  scanf("%f", &peso);

  printf("altura em metros:");
  float altura;
  scanf("%f", &altura);

  float IMC= peso / (altura * altura);

  printf("%s%f\n", "O IMC resultante eh:", IMC);

  return 0;
}