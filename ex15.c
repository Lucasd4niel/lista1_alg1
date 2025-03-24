/*15. Escreva um algoritmo que calcule o volume de um cilindro circular, dados o raio
e altura dele. Lembrando que V = π ∗ r
2 ∗h, onde π = 3.14, r = raio e h = altura.*/

#include <stdio.h>

int main(void){

    float h, r, v, pi=3.14;
    printf("insira o valor do raio do cilindro em CM: ");
    scanf("%f", &r);
    printf("\ninsira o valor da altura do cilindro em CM: ");
    scanf("%f", &h);
    v = pi * (r * r) * h;
    printf("\no volume do cilindro e = %f CM\n", v);

    return 0;
}