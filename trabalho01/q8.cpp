#include <stdio.h>

int main(){
    // Leia 10 números e calcule a soma total

    int numeros [10] = {23, -18, 2, 9, -37, 59, -22, 27, 44, -6};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    int somaTotal = 0;
    
    for(int i = 0; i < tamanhoArray; i++){
        somaTotal += (numeros[i]);
    }

    printf("Resultado: %d \n", somaTotal);
    
}