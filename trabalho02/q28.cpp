#include <stdio.h>
#include <stdlib.h>

int maior_valor_vetor(int *vet, int tam){
    int maior_valor = vet[0];

    for(int i = 0; i < tam; i++){
        if(vet[i] > maior_valor){
            maior_valor = vet[i];
        }
    }
    return maior_valor;
}

int main(){
    int vetor [5] = {5, 2, 14, 7, 1};
    
    printf("Maior valor no vetor: %d", maior_valor_vetor(vetor, 5));

    return 0;

}