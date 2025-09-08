#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int numeros[] = {7, 12, 7, 3, 18, 12, 25, 25, 4, 18};
    int n = sizeof(numeros)/sizeof(numeros[0]);

    bool visitado[10] = {false}; // mesmo tamanho do vetor
    // for(int i = 0; i < n; i++){
    //     printf("%d \n", visitado[i]);
    // }
    

    for (int i = 0; i < n; i++) {
        //printf("Inicio: %d \n", visitado[i]);

        if (visitado[i]) continue; // já contamos esse valor antes

        int cont = 1;
        for (int j = i + 1; j < n; j++) {
            //printf("%d \n %d \n", numeros[i], numeros[j]);

            if (numeros[j] == numeros[i]) {
                //printf("entrou\n");

                cont++;
                visitado[j] = true; // marca iguais para não imprimir de novo
            }
        }

        printf("Numero %d repetido %d vez(es).\n", numeros[i], cont);
    }

    return 0;
}