#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int matriz [3][3];
    int n = 3;

    printf("Insira os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Valor: ");
	        scanf("%d", &matriz[i][j]);

        }
    }

    int soma = 0;
    int elemento;

    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){

			if( i+j == n-1){
				elemento = matriz[i][j];
                printf("%d \n", elemento);
                soma += elemento;
			}
		}
	}

    printf("Resultado da soma: %d ", soma);

    return 0;

}