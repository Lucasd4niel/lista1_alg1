#include <stdio.h>

int main(void){
    float distancia, consumo, combustivel;
    scanf("%f %f %f", &distancia, &consumo, &combustivel);
    printf("Litros necessários: %.2f L\n", distancia / consumo);
    printf("Valor gasto: R$ %.2f\n", (distancia / consumo) * combustivel);
    return 0;    
}