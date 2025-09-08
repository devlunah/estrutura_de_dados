#include <stdio.h>

int main(){
    // Substitua os valores negativos por zero

    int numeros [15] = {-63, 27, -11, 92, -5, 48, -36, 7, -89, 54, -22, 13, -74, 31, -2};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    for (int i = 0; i < tamanhoArray; i++){

        if(numeros[i] < 0){
            numeros[i] = 0;
        }
    }

    for (int b = 0; b < tamanhoArray; b++){
        printf("%d \n", numeros[b]);
    }
}