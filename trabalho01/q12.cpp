#include <stdio.h>

int main(){
    // Elimine valores repetidos de um vetor de 10 elementos

    int numeros [] = {7, 12, 7, 3, 18, 12, 25, 25, 4, 18};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);
    //int numero_anterior;
    //int numero_posterior;

    int numeros_removidos [10];

    for (int i = 0; i < tamanhoArray; i++) {
        numeros_removidos[i] = numeros[i];
        
        printf("\n%d ", numeros[i]);
        printf("\n%d \n", numeros_removidos[i]);
    }
    
    for (int a = 0; a < tamanhoArray; a++) {
        for(int b = 9; b >= 0; b--){
            if(numeros_removidos[b] == numeros[a + 1]){

            }

        }

        //numeros_removidos[i] = numeros[i];
        
        printf("\n%d ", numeros[i]);
        printf("\n%d \n", numeros_removidos[i]);
    }

    // for(int b = 0; b < 20; b++){


    // }

}

     // if(numero_anterior == numero_posterior){
        //     numeros_removidos[i] = numero_posterior;
             
        // }

        // printf("\n%d \n", numeros[i]);
        // printf("\n %d \n", numero_anterior);
        // printf("\n %d \n", numero_posterior);
        // printf("\n %d \n", numeros_removidos[i]);
            


        // if (numeros[i] == numeros[i + 1]) {
        //     indice_remocao = numeros[i];

        //     for (int b = indice_remocao; b < tamanhoArray - 1; b++){
        //             numeros[b] = numeros[b+1];
        //     }

        // }