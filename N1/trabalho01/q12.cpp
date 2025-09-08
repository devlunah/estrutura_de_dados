#include <stdio.h>

int main(){
    // Elimine valores repetidos de um vetor de 10 elementos

    int numeros [] = {7, 12, 7, 3, 18, 12, 25, 25, 4, 18};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    int contador = 0;

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
        contador = 0;
    }      

    for (int b = 0; b < tamanhoArray; b++){
        printf("Novo array: %d \n", numeros[b]);
    }
}


// tentativa de copiar os vetores e depois comparar:
    // for (int i = 0; i < tamanhoArray; i++) {
    //     numeros_removidos[i] = numeros[i];
        
    //     printf("\n%d ", numeros[i]);
    //     printf("\n%d \n", numeros_removidos[i]);
    // }
    
    // for (int a = 0; a < tamanhoArray; a++) {
    //     for(int b = 9; b >= 0; b--){
    //         if(numeros_removidos[b] == numeros[a + 1]){

    //         }

    //     }

    //-------------------------------------------------------------------------