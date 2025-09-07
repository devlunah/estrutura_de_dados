#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *vet, int tam){
    int soma = 0;
    for(int i = 0; i<tam; i++){
        soma+= vet[i];
    }
    return soma;

}

int main(){
    int vetor [7] = {2, 4, 6, 8, 10, 12, 14};
    printf("Resultado da soma dos elementos do vetor: %d", soma_vetor(vetor, 7));

    return 0;

}