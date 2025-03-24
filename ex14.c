/*14. Escreva um algoritmo onde, dada uma quantidade de tempo em 
horas, minutos e segundos, converta-a para a quantidade equivalente em segundos.*/

#include <stdio.h>

int main(void){
    int h, m, s, convert;
    
    printf("informe a hora: ");
    scanf("%d", &h);
    printf("\ninforme a minuto: ");
    scanf("%d", &m);
    printf("\ninforme os segundo: ");
    scanf("%d", &s);
    convert = (((h*60)*60) + (m*60) + s);
    printf("%d:%d:%d equivale a %d segundos\n", h, m, s, convert);
    return 0;
}