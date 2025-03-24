/*17. Escreva um algoritmo que leia dois caracteres e armazene-os em duas vari ́aveis c1
e c2. Depois disso, seu algoritmo deve trocar o caractere de c1 pelo caractere de
c2 e imprimir o conte ́udo de c1 e c2.*/


#include <stdio.h>

int main(void){
    char c1, c2, aux;
    printf("insira um caractere: ");
    scanf(" %c", &c1);
    printf("insira outro caractere: ");
    scanf(" %c", &c2);
    printf("\nC1 = %c\nC2 = %c\n", c1, c2);
    aux = c1;
    c1 = c2;
    c2 = aux;
    printf("\ninvertidos");
    printf("\nC1 = %c\nC2 = %c\n", c1, c2);
    return 0;
}