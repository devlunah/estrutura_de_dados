#include <stdio.h>

int main(){
    // Leia 10 números e mostre apenas os negativos

    int numeros [10] = {-47, -12, 5, 3, -7, 15, 22, -31, 44, -8};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    printf("Numeros negativos: \n");

    for(int i = 0; i < tamanhoArray; i++){

        if(numeros[i] < 0){ 
            printf("%d \n", numeros[i]);
        }
    }

}