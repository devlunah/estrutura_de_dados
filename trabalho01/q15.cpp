#include <stdio.h>
#include <stdbool.h>

int main(){
    // Verifique se um vetor está ordenado

    int numeros_aleat [10] = {-47, 23, -8, 91, -32, 5, -76, 14, -1, 60};

    int numeros_ord [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tamanhoArray = 10;

    bool array_ordenado1 = true;
    bool array_ordenado2 = true;

    for (int contador = 1; contador < tamanhoArray; contador++) {
        for (int i = 0; i < tamanhoArray - 1; i++) {
            if (numeros_aleat[i] > numeros_aleat[i + 1]) {
                array_ordenado1 = false;
            } 
        }
    }

    for (int contador = 1; contador < tamanhoArray; contador++) {
        for (int i = 0; i < tamanhoArray - 1; i++) {
            if (numeros_ord[i] > numeros_ord[i + 1]) {
                array_ordenado2 = false;
            } 
        }
    }
    
    printf("Array 1 esta ordenado? (1 = true; 0 = false) \n  %d \n", array_ordenado1);
    printf("Array 2 esta ordenado? (1 = true; 0 = false) \n  %d \n", array_ordenado2);

}