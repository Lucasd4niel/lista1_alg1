/*10. Escreva um algoritmo que imprima a m ́edia aritm ́etica dos n ́umeros 8.9 e 7; a
m ́edia dos n ́umeros 4, 5 e 6; a soma das duas m ́edias e a m ́edia das m ́edias.*/

#include <stdio.h>

int main(void){
    int a1=8, a2=9, a3=7, media_a, b1=4, b2=5, b3=6, media_b, media_total;
    media_a = (a1+a2+a3)/3; 
    media_b = (b1+b2+b3)/3; 
    media_total = (media_a+media_b)/2;
    printf("Media A: %d\n\n", media_a);
    printf("Media B: %d\n\n", media_b);
    printf("Media Total: %d\n\n", media_total);
    
    return 0;
}