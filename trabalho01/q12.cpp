#include <stdio.h>

int main(){
    // Elimine valores repetidos de um vetor de 10 elementos

    int numeros [] = {7, 12, 7, 3, 18, 12, 25, 25, 4, 18};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    int indice_remocao;

    

    // for (int contador = 1; contador < tamanhoArray; contador++){
    //     for (int i = 0; i < tamanhoArray; i++) {
    //         if (numeros[i] == numeros[i + 1]) {
    //             indice_remocao = numeros[i];

    //             for (int b = indice_remocao; b < tamanhoArray - 1; b++){
    //                     numeros[b] = numeros[b+1];
    //             }

    //         }
    //     }
    // }

    
    
    // printf("\nArray sem elementos repetidos: \n");
    // for (int i = 0; i < tamanhoArray; i++) {
    //     printf("%d \n", numeros[i]);
    // }
}