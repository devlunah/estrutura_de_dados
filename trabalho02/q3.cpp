#include <stdio.h>
#include <stdlib.h>

//

int main(){

    float num_aleatorios [8];
    
    float soma = 0.00;
    
    for (int i = 0; i < 8; i++){
        printf("Digite um numero: ");
	    scanf("%f", &num_aleatorios[i]);
        soma += num_aleatorios[i];

    }
    float tamanhoArray =  sizeof(num_aleatorios)/sizeof(num_aleatorios[0]);

    float media = soma / tamanhoArray;

    printf("Resultado da media: %.2f \n", media);

    return 0;

}