/*16. Escreva um algoritmo que leia 6 notas de provas e calcule a m ́edia aritm ́etica.
Escreva uma vers ̃ao onde vocˆe armazena as 6 notas em 6 vari ́aveis diferentes.
Escreva outra vers ̃ao na qual vocˆe s ́o tem uma vari ́avel para ler as notas.*/

#include <stdio.h>

int main(void){
    int n, media=0;
    printf("\ninforme a nota 1: ");
    scanf("%d", &n);
    media = media + n; 
    printf("\ninforme a nota 2: ");
    scanf("%d", &n);
    media = media + n; 
    printf("\ninforme a nota 3: ");
    scanf("%d", &n);
    media = media + n; 
    printf("\ninforme a nota 4: ");
    scanf("%d", &n);
    media = media + n; 
    printf("\ninforme a nota 5: ");
    scanf("%d", &n);
    media = media + n; 
    printf("\ninforme a nota 6: ");
    scanf("%d", &n);
    media = (media + n) / 6;
    printf("\nmedia: %d\n", media); 
    return 0;
}