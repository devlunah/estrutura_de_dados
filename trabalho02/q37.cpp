#include <stdio.h>
#include <stdlib.h>

int soma_vetor_recursiva(int *vet, int tam){
    if (tam == 0){
        return tam;

    }else{
        return vet[tam-1] + soma_vetor_recursiva(vet, tam-1);
    }

}

int main(){
    int vetor [5] = {2, 4, 6,  8, 10};
    printf("Soma dos elementos do vetor: %d", soma_vetor_recursiva(vetor, 5));

    return 0;

}