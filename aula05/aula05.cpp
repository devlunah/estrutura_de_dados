#include <stdio.h>

// Vetores, Matrizes e Funções Recursivas
// aula 05

/*
Funções em C
-> executam uma tarefa específica

precisam ser antes da função main
*/

// exemplo 1:

/*int somar (int a, int b){
	return a + b;
}
main(){
	
int resultado = somar(5, 3);
printf("%i", resultado);
	
}*/

// funcao vs procedimento:
// exemplo 2:

/*
void soma_procedimento(int a, int b){
	printf("%i \n", a+b);
}
//void -> retorna valor vazio, é como é declarado todo procedimento

int soma_funcao(int a, int b){
	return a + b;	
}

main(){
	soma_procedimento(5, 3);
	int resultado = soma_funcao(5, 5);
	
	soma_procedimento(5, resultado);
}
*/

//passar a posição de um vetor para um procedimento:
/*
void dobrarValor(int *valor){
	*valor *=2;
	printf("%i", *valor);
}

main(){
	int meuVetor[] = {10, 20, 30};
	dobrarValor(&meuVetor[1]); //& serve para passar o vetor como parametro (*valor) dentro da função
}
*/

/*Funções recursivas
chamam a si mesmas para resolver um problema dividindo-o em casos menores do mesmo tipo

*/
//exemplo1: calculo de fatorial
/*
int fatorial(int n){
	if(n <= 1)
		return 1;
	
		
	else
		return n * fatorial(n-1);
		
}

int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Fatorial de %d é %d\n", num, fatorial(num));
	return 0;
}
*/

//exemplo2: sequencia de fibonacci

int fibonacci(int n){
	if(n<=1) 
		return n;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int termo;
	printf("Digite o numero do termo da sequencia de fibonacci: ");
	scanf("%d", &termo);
	
	printf("Sequencia de fibonacci ate o %d° termo: \n", termo);
	
	for (int i = 0; i <= termo; i++){
		printf("%d", fibonacci(i));
		
	}
	printf("\n");
	return 0;
	
}




