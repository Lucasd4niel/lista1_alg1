#include <stdio.h>
#define cobre 0.7
#define zinco 0.3

int main(void){
    float latao;
    scanf("%f", &latao);
    printf("Cobre necessário: %.2fKG\n", latao*cobre);
    printf("Zinco necessário: %.2fKG\n", latao*zinco);

    return 0;
}