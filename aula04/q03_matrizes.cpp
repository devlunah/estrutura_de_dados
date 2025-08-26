// aula 25/08/2025
/*
-> matrizes

linhas
colunas
coordenadas de acesso [i][j]

sintaxe: tipo nomeMatriz[linhas][colunas];

exemplo da sintaxe: float notas[5][2];

exemplo pr�tico:

*/

#include <stdio.h>

int main(){
	int vetor[4] = {0, 1, 2, 3};
	int matriz [2][3] = {
		{0, 0, 0},
		{1, 0, 0}
	};
	
	
	printf("%d \n", matriz[0][0]);
	printf("%d", vetor[2]);
	
}
