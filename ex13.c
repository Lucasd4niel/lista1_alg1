/*13. Escreva um algoritmo que leia um n ́umero inteiro e mostre o 
resultado do quociente (inteiro) da divisao desse n ́umero por 2 e por 3.*/

#include <stdio.h>

int main(void){

    int n;

    printf("informe um numero: ");
    scanf("%d", &n);
    printf("quaciente da divisao por 2 = %d\n", n % 2);
    printf("quaciente da divisao por 3 = %d\n", n % 3);

    return 0;
}