#include <stdio.h>
#define MAX 10

//filas
/*
FIFO (first in, first out
*/

int fila[MAX];
int frente = -1, tras = -1;

void enqueue(int valor){ //enfileirar
	//printf("Frente na funcao enqueue, no inicio: %d \n", frente);
	if(tras == MAX - 1){
		printf("Fila cheia! \n");
		return;
	}
	if(frente == -1) frente = 0;
	//printf("Frente na funcao enqueue:: %d \n", frente);
	//printf("Tras na funcao enqueue: %d \n", tras);
	fila[++tras] = valor;  // incrementar e depois usar a vari�vel
	//printf("Enfileirado: %d \n", valor);
}

void dequeue(){
	//printf("Frente na funcao dequeue, no inicio: %d \n", frente);
	if (frente == -1 || frente > tras){
		printf("Fila vazia! \n");
		return;
	}
	printf("Desenfileirado: %d \n", fila[frente++]); // usar e depois incrementar a vari�vel
	// ao passar fila[frente++], eu pego o valo
}

void peek(){
	//printf("Frente na funcao peek: %d \n", frente);
	if (frente == -1 || frente > tras){
		printf("Fila vazia! \n");
		return;
	}
	printf("Primeiro da fila: %d \n", fila[frente]);
}

void Mostra_Fila(){
	if (frente == -1 || frente > tras){
		printf("Fila vazia! \n");
		return;
	}
	//printf("Frente na funcao mostrar: %d ", frente);
	
	printf("Fila: ");
	for(int i = frente; i <= tras; i++){
		printf("%d ", fila[i]);
	}
	printf("\n");
}

int main(){
	//printf("Frente fora das funcoes: %d \n", frente);
	int valor;
	for(int i = 0; i < 10; i++) {
		scanf("%d \n", &valor);
		enqueue(valor);
	};
	//tentar usar o scanf
	
	Mostra_Fila();
	peek();
	//printf("Frente fora das funcoes: %d \n", frente);
	for(int i = 0; i < 5; i++) dequeue();
	Mostra_Fila();
	
	for(int i = 10; i <= MAX; i++){
		printf("%d ", fila[i]);
	}
	printf("\n");
	
	return 0;
	
	
}

