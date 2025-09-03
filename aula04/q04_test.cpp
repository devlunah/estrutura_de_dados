// aula 25/08/2025
//TESTAR DEPOIS FAZENDO A INSERCAOO DA POSICAO
#include <stdio.h>

int main(){
	
	int matriz [2][3] = {
		{0, 0, 0},
		{1, 0, 0}
	};
	
	bool num_encontrado = false;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", matriz[i][j]);
			
			if(matriz[i][j] != 0){
				printf("num encontrado");
				num_encontrado = true;
				break;
			}
		}
		if (num_encontrado == true){
			break;
		}
	}
	
}