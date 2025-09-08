#include <stdio.h>

int main(){
    // Mostre a posição do menor valor em um vetor de 10 elementos

    int num_inteiros [10] = {47, 12, 89, 3, 64, 25, 58, 91, 7, 36};
    int tamanhoArray = sizeof(num_inteiros)/sizeof(num_inteiros[0]);
    
    int menor_valor = num_inteiros[0];
    int indice_menor_valor = 0;
    
    for(int i = 1; i < tamanhoArray; i++){
    	if(num_inteiros[i] < menor_valor){
    		menor_valor = num_inteiros[i];
            indice_menor_valor = i;
		}
	}

	printf("Menor valor: %d \n", menor_valor);
    printf("Indice do menor valor: %d \n", indice_menor_valor);

}