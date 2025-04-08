#include <stdio.h>
#define pi 3.14

int main(void){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("-------------------\nArea do triangulo de %.2f por base e %.2f por altura: %.2f\n--------------------\n",a, c, (a*c)/2);
    printf("Area do circulo de raio %.2f: %.2f\n--------------------\n", c, pi*(c*c));
    printf("Area do trapezio que tem %.2f e %.2f por %.2f de altura: %.2f\n--------------------\n",a, b, c, ((a+b)*c)/2);
    printf("Area do quadrado com lado %.2f: %.2f\n--------------------\n",b, b*b);
    printf("Area do retangulo com lados %.2f e %.2f: %.2f\n--------------------\n",a, b, a*b);
    return 0;
}