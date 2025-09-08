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
    
    int maior_valor = matriz[0][0];


    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
            if(matriz[i][j] > maior_valor){
                maior_valor = matriz[i][j];
            }
		}

	}

    printf("Maior valor: %d", maior_valor);

    return 0;

}