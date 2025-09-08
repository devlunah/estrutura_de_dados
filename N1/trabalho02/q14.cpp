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

    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){

			if(i == j){
				printf("Diagonal -> %d \n", matriz[i][j]);
			}
		}
	}

    return 0;

}