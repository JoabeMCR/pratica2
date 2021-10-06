#include <stdio.h>

int main() {

printf ("defina um valor em celsius:");
float valor_em_celsius;
scanf("%f", &valor_em_celsius);

float valor_em_fahrenheit= ((valor_em_celsius * 9) / 5 ) + 32;

printf("%s%f\n", "o valor em fahrenheit eh:", valor_em_fahrenheit);

return 0;

} 