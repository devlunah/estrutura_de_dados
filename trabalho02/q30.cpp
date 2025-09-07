#include <stdio.h>
#include <stdlib.h>

int valor_absoluto(int num){
    if(num < 0){
        num = num*(-1);
        return num;

    }else{
        return num;
    }

}

int main(){
    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("Valor absoluto: %d", valor_absoluto(numero));

    return 0;

}