#include <stdio.h>
#include <stdlib.h>

// Produto dos elementos
/* Crie um programa que leia 6 números inteiros e calcule o produto (multiplicação) de todos os elementos. */

int main(){
    int num [6];
    printf("Insira 6 numeros: \n");
    for (int i = 0; i < 6; i++){
        scanf("%d", &num[i]);
    }
    
    int multiplicacao = 1;

    for(int a = 0; a < 6; a++){
        multiplicacao *= num[a];
    }

    printf("Total da multiplicacao: %d", multiplicacao);

    return 0;
}