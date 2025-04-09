#include <stdio.h>

int main(void){
    int centavos, centavos_dividitos, conta_inteira;
    float carlos, andre, felipe, conta, cent_felipe;
    scanf("%f", &conta);
    centavos = (conta / 3) * 100;
    centavos_dividitos = centavos % 100;
    cent_felipe =  centavos_dividitos;
    conta_inteira = (conta / 3);
    cent_felipe = (cent_felipe /100)*3;
    andre = conta_inteira;
    carlos = conta_inteira;
    felipe = conta_inteira + cent_felipe;
    printf("%.2f\n %.2f\n %.2f\n", andre, carlos, felipe);
    return 0;
}