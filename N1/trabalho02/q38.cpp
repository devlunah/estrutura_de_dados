#include <stdio.h>
#include <stdlib.h>

void inverter_vetor(int *vet, int tam, int inicio, int fim){
    int aux;
    printf("%d - %d - %d \n", inicio, fim, tam);

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
        printf("%d \n", aux);
        vet[inicio] = vet[fim];
        printf("%d \n", vet[inicio]);
        vet[fim] = aux;
        printf("%d \n --------------\n", vet[fim]);
        
        inverter_vetor(vet, tam, inicio+1, fim-1);
        break;
    }
}

int main(){
    int vetor [12] = {5, 10, 15, 20, 25, 54, 84, 97, 57, 33, 22, 88};
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    int indice_inicio = 0;
    int indice_fim = tamanhoVetor-1;

    printf("Vetor invertido: \n");
    inverter_vetor(vetor, 12, indice_inicio, indice_fim);

    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d \n", vetor[i]);
    }

    return 0;
}