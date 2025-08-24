#include <stdio.h>


int main(void){
    // Rotacione os valores de um vetor para a direita

    int numeros [] = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    int valor_temp = numeros[tamanhoArray - 1];

    // for(int a = 0; a < tamanhoArray; a++){
    //     printf("%d \n", numeros[a]);
    // }

    for(int i = tamanhoArray - 2; i >= 0; i--){
        numeros[i + 1] = numeros[i];
    }

    numeros[0] = valor_temp;

    for(int a = 0; a < 10; a++){
        printf("%d \n", numeros[a]);
    }

}
