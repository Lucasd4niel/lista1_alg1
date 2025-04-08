#include <stdio.h>

int main(void){
    int segundos, minutos, horas;
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 60);  
    printf("%dh%dmin%ds", horas, minutos, segundos);
    return 0;
}