#include <stdio.h>

int main(){
    // Leia 10 números e conte quantos são pares

    int numeros [10] = {72, 14, 59, 91, 37, 100, 62, 4, 88, 22};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    int quant_numPares = 0;

    for(int i = 0; i < tamanhoArray; i++){
        //printf("%d \n", numeros[i]);

        if(numeros[i] % 2 == 0){ //verificar se é par
            quant_numPares += 1; //adicionar na contagem de pares
        }
    }

    printf("Quantidade de numeros pares:  %d \n", quant_numPares);

}