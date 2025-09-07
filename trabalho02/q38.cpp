#include <stdio.h>
#include <stdlib.h>

/*
Crie uma função inverter_vetor que receba um vetor e dois índices, inicio e fim. 
O caso base é quando inicio >= fim. 
O caso recursivo é trocar os elementos nas posições inicio e fim e chamar a função novamente com inicio + 1 e fim - 1.
*/ 

int inverter_vetor(int *vet, int tam, int inicio, int fim){
    if(inicio >= fim){
        return inicio;
    }else{

    }
    

}

int main(){
    int vetor [5] = {5, 10, 15, 20, 25};
    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    int indice_inicio = vetor[0];
    int indice_fim = vetor[tamanhoVetor-1];

    printf("Vetor invertido: ", inverter_vetor(vetor, 5, indice_inicio, indice_fim));

    return 0;

}