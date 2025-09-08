#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int matriz_quadrados [3][3];
    int matriz [3][3];
    
    printf("Insira os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
            int quadrado = matriz[i][j] * matriz[i][j];
            matriz_quadrados[i][j] = quadrado;    
		}
	}

    printf("Matriz dos quadrados: \n");
    for(int a = 0; a < 3; a++){
        for(int c = 0; c < 3; c++){
            printf("%d \n", matriz_quadrados[a][c]);
        }
    }

    return 0;

}