#include <stdio.h>

int main(){
    // Inverta os pares com os Ã­mpares em um vetor

    int numeros [10] = {7, 21, 14, 35, 28, 42, 49, 53, 56, 70};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    int ordenadorPares;
    int proximoNum;

    for (int contador = 1; contador < tamanhoArray; contador++) {
        for (int i = 0; i < tamanhoArray - 1; i++) {

            proximoNum = numeros[i + 1];

            if (numeros[i] % 2 != 0 && proximoNum % 2 == 0) {
                ordenadorPares = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = ordenadorPares;
            }
        }
    }

    printf("\nElementos do array em ordem (pares e depois ímpares):\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%d \n", numeros[i]);
    }

}
