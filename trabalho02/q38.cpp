#include <stdio.h>
#include <stdlib.h>

void inverter_vetor(int *vet, int tam, int inicio, int fim){
    int aux;

    // primeiro modo de fazer usando if else:
    // if(inicio >= fim){    
    //     return;

    // }else{
    //     aux = vet[inicio];
    //     //printf("%d \n", aux);
    //     vet[inicio] = vet[fim];
    //     //printf("%d \n", vet[inicio]);
    //     vet[fim] = aux;
    //     //printf("%d \n", vet[fim]);

    //     inverter_vetor(vet, tam, inicio+1, fim-1);
    // }

    // segundo modo de fazer usando while:
    while(inicio < fim){
        aux = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = aux;

        inverter_vetor(vet, tam, inicio+1, fim-1);
        break;
    }
}

int main(){
    int vetor [5] = {5, 10, 15, 20, 25};
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    int indice_inicio = 0;
    int indice_fim = tamanhoVetor-1;

    printf("Vetor invertido: \n");
    inverter_vetor(vetor, 5, indice_inicio, indice_fim);

    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d \n", vetor[i]);
    }

    return 0;
}