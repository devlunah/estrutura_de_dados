#include <stdio.h>
#include <stdlib.h>

/*
Crie uma função maior_elemento_recursivo que receba um vetor e seu tamanho n. 
O caso base é se n for 1, a função retorna o único  elemento. 
O caso recursivo é comparar o último elemento (vetor[n - 1]) com o resultado da chamada recursiva 
para o restante do vetor e retornar o maior dos dois.
*/ 

int maior_elemento_recursivo(int *vet, int n){
    if(n == 1){
        return n;

    }else{


    }

}

int main(){
    
    int vetor [4] = {2, 4, 6, 8};

    printf("Maior elemento: ", maior_elemento_recursivo(vetor, 4));
    return 0;

}