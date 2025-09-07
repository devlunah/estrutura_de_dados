#include <stdio.h>
#include <stdlib.h>

int maior_elemento_recursivo(int *vet, int n){
    if(n == 1){
        return vet[0];

    }else{
        int maior_valor = maior_elemento_recursivo(vet, n-1);
        if(vet[n - 1] > maior_valor){
            return vet[n-1];
        }else{
            return maior_valor;
        }
    }
}

int main(){
    
    int vetor [5] = {1, 5, 6, 2, 4};

    printf("Maior elemento: %d", maior_elemento_recursivo(vetor, 5));
    return 0;

}