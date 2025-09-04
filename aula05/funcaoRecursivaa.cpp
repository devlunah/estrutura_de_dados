#include <stdio.h>
#include <stdlib.h>

void abrirPrograma(int vezes){
	if (vezes <= 0) return;
	system("start notepad");
	abrirPrograma(vezes-1);
}

int main(){
	int n;
	printf("Quantas vezes deseja abrir o programa? ");
	scanf("%d", &n);
	if(n > 10){
		printf("Numero muito alto! Limitando a 10 instâncias.\n");
		n = 10;	
	}
	abrirPrograma(n);
	printf("Notepad aberto %d vezes.\n", n);
	return 0;
}
