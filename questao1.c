33#include <stdio.h>

int main () {

   printf("defina um valor para o numero_1:");
float numero_1;
scanf("%f", & numero_1);

printf("defina um valor para o numero_2:");
float numero_2;
scanf("%f", & numero_2);

printf("defina um valor para o numero_3:");
float numero_3;
scanf("%f", & numero_3);

float media_aritmetica= (numero_1 + numero_2 + numero_3)/3;

printf("%s%f\n", " A media aritmetica dos tres numeros eh: ", media_aritmetica);

return 0;
}

 


