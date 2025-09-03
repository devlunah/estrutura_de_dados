#include <stdio.h>

int main(){
    // Conte quantas vezes cada número aparece em um vetor de 10 elementos

    int numeros [] = {7, 12, 7, 3, 18, 12, 25, 25, 4, 18};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    int contador = 0;
    int numeros_repetidos [10];

    int auxiliar = 0;

    for(int i = 0; i < tamanhoArray; i++){
        for(int indice_comparacao = 0; indice_comparacao < tamanhoArray; indice_comparacao++){

            if(numeros[indice_comparacao] == numeros[i]){
                contador += 1;

                if (contador >= 2){
                    for (int indiceRemocao = indice_comparacao; indiceRemocao < tamanhoArray - 1; indiceRemocao++){
                        numeros[indiceRemocao] = numeros[indiceRemocao+1];
                    }
                    tamanhoArray --;
                    indice_comparacao --;
                }
            }            
        }
        printf("Numero %d repetido %d vez(es).\n", numeros[i], contador);
        contador = 0;    
    } 
}