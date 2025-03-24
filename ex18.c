#include <stdio.h>

int main(void){
int a, b, c, d/*, r, s*/;
    
    printf("insira um numero para A: ");
    scanf("%d", &a);
    printf("insira um numero para B: ");
    scanf("%d", &b);
    printf("insira um numero para C: ");
    scanf("%d", &c);

     d = (((a+b)*(a+b))+((b+c)*(b+c)))/2;
    
        /*simplificado
        s = (b+c)*(b+c);
        r = (a+b)*(a+b);
        d = (r + s)/2;*/

    printf("O VALOR DE D EH: %d\n", d);


    return 0;
}