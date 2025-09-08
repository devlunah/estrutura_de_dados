#include <stdio.h>

int main(){
    // Ordene um vetor de 10 elementos em ordem crescente
    // MÉTODO BUBBLE SORT

    int numeros [10] = {-47, 23, -8, 91, -32, 5, -76, 14, -1, 60};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    int ordenador;

    for (int contador = 1; contador < tamanhoArray; contador++) {
        for (int i = 0; i < tamanhoArray - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                ordenador = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = ordenador;
            }
        }
    }

    printf("\nElementos do array em ordem crescente:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%d \n", numeros[i]);
    }
}