#include <stdio.h>

int main(void){
    int centavos;
    float carlos, andre, felipe, conta, cent_felipe;
    scanf("%f", &conta);
    centavos = (conta * 100) / 3;
    centavos = (centavos % 100)*3;
    cent_felipe = centavos / 100;

    carlos =  (conta / 3);
    andre = (conta / 3);
    felipe = (conta / 3) + cent_felipe;
    printf("%f\n %f\n %f", carlos, andre, felipe);
    return 0;
}