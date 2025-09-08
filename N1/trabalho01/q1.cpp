#include <stdio.h>

int main(){
    // Crie um vetor de 10 inteiros e imprima seus valores

    int num_inteiros [10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tamanhoArray =  sizeof(num_inteiros)/sizeof(num_inteiros[0]);

    for (int i = 0; i < tamanhoArray; i++){
        printf("%d \n",  num_inteiros[i]);

    }

}

