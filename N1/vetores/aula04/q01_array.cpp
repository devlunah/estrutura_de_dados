// aula 25/08/2025

//1. tabuada de um numero

#include <stdio.h>
int main () {
	int numero;
	int tam_tabuada;
	
	printf("Insira um numero: ");
	scanf("%d", & numero);
	
	printf("Insira o tamanho da tabuada: ");
	scanf("%d", & tam_tabuada);
	
	int tabuada [tam_tabuada];
	
	//printf("Numero para calculo da tabuada: %d \n", numero);
	//printf("a: %d", tam_tabuada);
	
	for (int i = 0; i <= tam_tabuada; i++){
		tabuada[i] = numero * i;
		printf("\n %d X %d = %d", numero, i, tabuada[i]);
	}
}