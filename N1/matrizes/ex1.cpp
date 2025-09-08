#include <stdio.h>
#include <stdlib.h>

// Transposição de matriz 2x3
/* Leia uma matriz 2x3 e gere a matriz transposta (3x2). Exiba a matriz resultante. */

int main(){

    int matriz [2][3];
    int matriz_transposta[3][2];

    printf("Insira os elementos da matriz: \n");
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    //matriz
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%d ---- ", matriz[linha][coluna]);
            
        }
        printf("\n");
    }

    for(int i = 0; i< 2; i++){
        for(int j = 0; j<3; j++){
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            printf("Transposta: %d ---- ", matriz_transposta[linha][coluna]);
            
        }
        printf("\n");
    }

}