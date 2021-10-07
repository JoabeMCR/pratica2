#include <stdio.h>

int main() {

  printf("informe o valor de compra do veiculo:");
  float v_compra;
  scanf("%f", &v_compra);

  printf("informe o ano da fabricacao:");
  float ano_fabricacao;
  scanf("%f", &ano_fabricacao);

  printf("informe o ano de depreciacao do veiculo:");
  float ano_depreciacao;
  scanf("%f", &ano_depreciacao);

  float valor_depreciado= (ano_depreciacao - ano_fabricacao) * 0.01 * v_compra;

  printf("%s%f\n", "o valor depreciado eh:", valor_depreciado);

return 0;
}