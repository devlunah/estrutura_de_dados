#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int matriz1 [2][2];
    int matriz2 [2][2];
    int matriz3 [2][2];

    printf("Insira os valores da primeira matriz 2x2: \n");
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Valor: ");
	        scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Insira os valores da segunda matriz 2x2: \n");
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Valor: ");
	        scanf("%d", &matriz2[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){

            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];

		}
	}

    printf("Resultado da soma das matrizes 1 e 2: \n");
    for(int a = 0; a < 2; a++){
        for(int c = 0; c < 2; c++){
            printf("%d \n", matriz3[a][c]);
        }
    }

    return 0;

}