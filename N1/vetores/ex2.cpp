#include <stdio.h>
#include <stdlib.h>

// Diferença entre maior e menor
/* Leia 8 números em um vetor. Calcule a diferença entre o maior e o menor valor do vetor. */

int main(){
    int num [8] = {1, 5, 3, 15, 2, 9, 25, 8};
    int maior = num[0];
    int menor = num[0];

    for(int i = 0; i < 8; i++){
        if(num[i] > maior){
            maior = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
        }

    }

    int diferenca = maior - menor;
    printf("Total da diferenca entre %d e %d = %d", maior, menor, diferenca);

}