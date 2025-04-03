#include <stdio.h>

int main(void){
int x, y, z, caixa_total, custo_total, ltinta, latas, rolo;
    printf("Informe a altura: ");
    scanf("%d", &x);
    printf("Informe a largura: ");
    scanf("%d", &y);
    printf("Informe o comprimento: ");
    scanf("%d", &z);
    caixa_total = 2 * (x * y + x * z + y * z);
    ltinta = 3 * caixa_total;
    latas = (ltinta + 5 - 1) / 5;
    rolo = (caixa_total + 10 - 1) / 10;
    custo_total = latas * 45 + rolo * 5 + caixa_total * 20;
    printf("%d\n", custo_total);
    return 0;
}