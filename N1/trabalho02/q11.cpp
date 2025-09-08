#include <stdio.h>
#include <stdlib.h>

//

int main(){
    int matriz[2][2];

    printf("Insira os valores da matriz 2x2: \n");
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);

        }
    }

    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}