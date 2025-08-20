#include <stdio.h>

int main(){
    // Leia 5 numeros inteiros e mostre o maior valor

    int num_inteiros [5] = {25, 32, 59, 1, 44};
    int tamanhoArray = sizeof(num_inteiros)/sizeof(num_inteiros[0]);
    
    int maior_valor = num_inteiros[0];
    
    for(int i = 1; i < tamanhoArray; i++){
    	if(num_inteiros[i] > maior_valor){
    		maior_valor = num_inteiros[i];
		}
    	
	}
	printf("Maior valor: %d \n", maior_valor);

}
