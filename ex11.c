/*11. Escreva um algoritmo que leia trˆes n ́umeros inteiros a, b e c
calcule a ∗ b + c e
mostre o resultado para o usu ́ario.*/

#include <stdio.h>

int main(void){
    int a, b, c;
    printf("insira o numero A\n");
    scanf("%d", &a);
    printf("insira o numero B\n");
    scanf("%d", &b);
    printf("insira o numero C\n");
    scanf("%d", &c);

    printf("o resultado de %d * %d + %d e igual a %d\n\n",a,b,c,(a*b+c));

    return 0;
}