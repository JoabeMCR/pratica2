#include <stdio.h>

int main() {

  printf("valor da hora de trabalho:");
  float h_trabalho;
  scanf("%f", &h_trabalho);

  printf("total de horas trabalhadas no mes:");
  float h_trabalhadas;
  scanf("%f", &h_trabalhadas);

  float salario_bruto= h_trabalho * h_trabalhadas;

  float impostos= salario_bruto * 0.36;

  float salario_liquido= salario_bruto - impostos;

  printf("%s%f\n,", "salario bruto: R$", salario_bruto);
  printf("%s%f\n", "salario liquido: R$", salario_liquido);
  printf("%s%f\n,", "impostos: R$", impostos);

  return 0;
}