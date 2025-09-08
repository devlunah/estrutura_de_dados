#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int matriz [3][2];
    printf("Insira os valores da matriz 3x2: \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);
        }
    }

    int contador_numPares = 0;

    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
            if(matriz[i][j] % 2 == 0){
                contador_numPares++;
            }
		}

	}

    printf("Total de numeros pares: %d", contador_numPares);

    return 0;

}