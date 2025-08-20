#include <stdio.h>

int main(){
    // Verifique se um número específico está presente em um vetor de 5 elementos
    int num_input;

    printf("Insira um numero: ");
    scanf("%d", &num_input);
    printf("You entered %d \n", num_input);

    int numeros [5] = {6, 12, 18, 24, 30};
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    bool esta_no_vetor = false;

    for(int i = 0; i < tamanhoArray; i++){
        if (num_input == numeros[i]){
            printf("Numero inserido esta dentro do vetor.");
            esta_no_vetor = true;
            break;
        }
    }

    if (esta_no_vetor == false){
        printf("Numero inserido nao esta dentro do vetor.");
    }
}