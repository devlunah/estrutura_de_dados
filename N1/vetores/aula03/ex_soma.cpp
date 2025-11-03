#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int somaAlvo = 7; // Exemplo: encontrar pares que somam 7

    printf("Pares que somam %d:\n", somaAlvo);

    for (int i = 0; i < tamanho; i++) {

        for (int j = i + 1; j < tamanho; j++) {
        
            if (arr[i] + arr[j] == somaAlvo) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            
            }
        }
    }

}

