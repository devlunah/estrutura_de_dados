#include <stdio.h>

int main(){
    // Multiplique cada valor do vetor por sua posição

    int numeros [7] = {-43, 18, -7, 92, -12, 5, -66};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    for (int i = 0; i < tamanhoArray; i++){
        numeros[i] = numeros[i] * i;
    } 

    for (int b = 0; b < tamanhoArray; b++){
        printf("%d \n", numeros[b]);
    }
}