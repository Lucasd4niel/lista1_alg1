#include <stdio.h>

int main(void){
    int numero, aux1, aux2, aux3;
    scanf("%d", &numero);

    aux1 = numero / 1000;
    numero = numero % 1000;
    aux2 = numero / 100;
    numero = numero % 100;
    aux3 = numero / 10; 
    numero = numero % 10;

    numero = aux1 +  aux2 * 10 + aux3 *100 + numero * 1000;
    printf("Numero invertido: %d", numero);

    return 0;
}