#include <stdio.h>
#include <stdlib.h>

float calcular_media(float num1, float num2, float num3){
    float soma = num1+num2+num3;
    float media = soma / 3.0;
    return media;

}

int main(){
    float x, y,z;
    printf("Insira o primeiro numero: ");
    scanf("%f", &x);

    printf("Insira o segundo numero: ");
    scanf("%f", &y);

    printf("Insira o terceiro numero: ");
    scanf("%f", &z);

    printf("Resultado da media: %.2f", calcular_media(x,y,z));

    return 0;

}