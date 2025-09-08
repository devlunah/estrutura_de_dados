// aula 25/08/2025
/*
-> for encadeado 
Objetivo: randomizar leituras

exemplo: 
*/

//2. tabuada do 1 at� a tabuada do numero x
#include <stdio.h>
int main () {
	
	int tam_tabuada = 100;
	int numero[tam_tabuada];
	int multiplicador[tam_tabuada];
	int tabuada[tam_tabuada * tam_tabuada];
	
//atribuir valores aos vetores:
	for(int valores = 1; valores<=tam_tabuada; valores++){
		numero[valores] = valores;
		multiplicador[valores] = valores;
		//printf("%d \n %d \n", numero[valores], multiplicador[valores]);
	}
	
//fazer os c�lculos de cada tabuada:
	
	//o primeiro for define qual tabuada ser� (se � a do 1, 2,..., 10)
	for (int i = 1; i <= tam_tabuada; i++){
		//printf("%d", numero[i]);
		
		//o segundo for define o multiplicador (de 1 a 10)
		for(int c = 1; c <= tam_tabuada; c++){
			//printf("%d", multiplicador[c]);
			
			multiplicador[c] = numero[i] * c;
			printf("\n %d X %d = %d", numero[i], c, multiplicador[c]);
		}
	}
}