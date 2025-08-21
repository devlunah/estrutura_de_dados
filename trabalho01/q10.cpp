#include <stdio.h>

void numeros(){
    int array_numeros [15] = {47, 83, 12, 5, 91, 42, 3, 67, 28, 19, 64, 7, 35, 58, 10}; 
}

void numPares(int array_numeros[], int array_num_pares[]){
    int tamanhoArray = sizeof(array_numeros)/sizeof(array_numeros[0]);

    for(int i = 0; i < tamanhoArray; i++){

        if(array_numeros[i] % 2 == 0){
            array_num_pares[i] = array_numeros[i];
        }
    }
}

int main(void){
    // Copie os valores pares de um vetor para outro

    int array_numeros[15];
    int array_num_pares[1];

    numeros();
    numPares(array_numeros, array_num_pares);

    printf("Vetor original: %d \n", array_numeros);

    printf("\nVetor copiado : %d \n", array_num_pares);

    return 0;

}