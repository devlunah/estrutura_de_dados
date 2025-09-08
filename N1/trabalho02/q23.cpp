#include <stdio.h>
#include <stdlib.h>

int maior_numero(int num1, int num2){
    char iguais [] = {"*Numeros iguais*"};

    if(num1 > num2){
        return num1;

    }else if(num2 > num1){
        return num1;

    }else{
        printf("%s \n", iguais);
        return 0;
    }

}

int main(){
    int x, y;
    printf("Insira o primeiro numero: ");
    scanf("%d", &x);

    printf("Insira o segundo numero: ");
    scanf("%d", &y);

    printf("Maior numero: %d", maior_numero(x,y));

    return 0;

}