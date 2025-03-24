#include <stdio.h>
#include <string.h>

int main(void){
float bruto, boni;
char nome[100], cargo[100];

    printf("insira seu nome: ");
    scanf("%s", nome);
    printf("insira seu cargo: ");
    scanf("%s", cargo);
    printf("insira seu salario: ");
    scanf("%f", &bruto);
    printf("\n--------------\n");
    printf("Nome: %s\n", nome);
    printf("Cargo: %s\n", cargo);
    printf("Salario Bruto: %f\n", bruto);
    printf("Salario bruto com 38%% de reajuste: %f reais\n", (bruto + (bruto*0.38)));
    boni = (bruto + (bruto*0.38)) * 0.20;
    printf("Bonificacao a partir do salario reajustado: %f reais\n", boni);
    printf("salario liquido: %f reais\n", bruto - (bruto * 0.15));
    return 0;
}