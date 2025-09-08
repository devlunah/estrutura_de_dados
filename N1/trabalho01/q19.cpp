#include <stdio.h>

int main(){
    // Calcule a média dos valores pares de um vetor

    
    int array_numeros [15] = {47, 83, 12, 5, 91, 42, 3, 67, 28, 19, 64, 7, 35, 58, 10};
    int tamanhoArray = sizeof(array_numeros)/sizeof(array_numeros[0]);

    int array_num_pares[15];
    int count = 0;
    int soma = 0;

    // copiar o vetor
    for(int i = 0; i < tamanhoArray; i++){
        if(array_numeros[i] % 2 == 0){
            array_num_pares[count] = array_numeros[i];
            count++;
        } 
    }
    // mostrar o vetor par
    for (int b = 0; b < count; b++){
        printf("Numeros pares: %d \n", array_num_pares[b]);
    }

    // calcular média
    for (int b = 0; b < count; b++){
        soma += array_num_pares[b];
    }

    //printf("%d \n", count);

    float media = soma / count;
    printf("Media: %.2f \n", media);

}
