#include <stdio.h>
#include <stdlib.h>

int somar(int num1, int num2){
    int result = num1 + num2;
    return result;

}

int main(){
    int x, y;
    printf("Insira o primeiro numero: ");
    scanf("%d", &x);

    printf("Insira o segundo numero: ");
    scanf("%d", &y);

    printf("Resultado da soma: %d", somar(x,y));

    return 0;

}