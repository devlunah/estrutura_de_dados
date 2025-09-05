#include <stdio.h>
#include <stdlib.h>

//

int main(){
    int matriz [3][3];

    printf("Insira os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);

        }
    }

    int soma = 0;
    int elemento;

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            elemento = matriz[linha][coluna];
            soma += elemento;
        }
    }

    printf("Resultado da soma: %d", soma);

    return 0;


}