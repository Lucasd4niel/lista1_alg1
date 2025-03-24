/*12. Escreva um algoritmo que leia um n ́umero inteiro e mostre o seu quadrado e seu
cubo. Por exemplo, se o n ́umero de entrada  ́e 3, a sa ́ıda deve ser 9 e 27.*/

#include <stdio.h>

int main(void){

    int n;
    printf("informe um numero: ");
    scanf("%d", &n);
    printf("quadrado: %d\n", n*n);
    printf("cubo: %d\n\n", n*n*n);
    
    return 0;
}