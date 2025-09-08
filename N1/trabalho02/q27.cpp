#include <stdio.h>
#include <stdlib.h>

void exibir_matriz(int m[][2], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", m[i][j]);
            
        }
        printf("\n");
    }

}

int main(){
    int matriz[2][2]={
        {1,2},
        {3,4}
    };

    printf("Matriz 2x2: \n");
    exibir_matriz(matriz, 2);

    return 0;

}