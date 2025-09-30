#include <stdio.h>

int main(){
	int variavel = 10;
	printf("%d \n", variavel++);
	printf("%d \n", variavel);
	
	variavel = 10;
	
	printf("%d \n", ++variavel);
	printf("%d \n", variavel);
	
	int valor;
	variavel = 10;
	
	valor = (variavel++ - variavel--);
	printf("%d \n", valor);
	printf("%d", variavel);
	
	return 0;
}

