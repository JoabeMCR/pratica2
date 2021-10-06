#include <stdio.h>

int main () {
 
 printf("defina o numero a ser divido:");
 int numero_a_ser_divido;
 scanf("%d", & numero_a_ser_divido);

printf("defina um divisor:");
int divisor;
scanf("%d", & divisor);

int quociente= numero_a_ser_divido/divisor;
int resto= numero_a_ser_divido%divisor;

printf("%s%d\n", "o quociente da divisao eh:", quociente);
printf("%s%d\n", "o resto da divisao eh:", resto);

return 0;

}