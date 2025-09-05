#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int matriz [2][3];

    printf("Insira os valores da matriz 2x3: \n");
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);

        }
    }

    int tamanhoMatriz = sizeof(matriz) / sizeof(matriz[0][0]);

    float soma = 0;
    int elemento;

    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            elemento = matriz[linha][coluna];
            soma += elemento;
        }
    }
    float media = soma / tamanhoMatriz;
    printf("Resultado da media: %.2f ", media);

    return 0;

}