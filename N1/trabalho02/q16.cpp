#include <stdio.h>
#include <stdlib.h>

//

int main(){
    int matriz [2][2];

    printf("Insira os valores da matriz 2x2: \n");
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);
        }
    }
    int soma = 0;
    int elemento;

    for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
            elemento = matriz[i][j];
            soma += elemento;
			
		}
        printf("Resultado da soma dos elementos da linha %d: %d \n", i+1, soma);
        soma = 0;
	}

    return 0;

}