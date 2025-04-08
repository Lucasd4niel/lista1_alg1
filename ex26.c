#include <stdio.h>

#define carro_X 60
#define carro_y 90

int main(void){
    int  hora, min;
    float distancia, tempo;
    scanf("%f", &distancia);
    tempo = distancia / (carro_y - carro_X);
    hora = tempo * 60;
    min = hora % 60;
    hora = tempo;

    printf("tempo: %dh%dmin", hora, min);
    return 0;
}