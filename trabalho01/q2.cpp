#include <stdio.h>

int main(){
    // Leia 5 números inteiros e mostre o maior valor

    int num_inteiros [5] = {10, 20, 30, 40, 50};
    int tamanhoArray = sizeof(num_inteiros)/sizeof(num_inteiros[0]);
    
    int maior_valor = num_inteiros[0];
    
    for(int i = 5; i <= tamanhoArray; i--){
    	if(num_inteiros[i] > maior_valor){
    		maior_valor = num_inteiros[i];
		}
    	
	}
	printf("Maior valor: %i \n", maior_valor);

}
