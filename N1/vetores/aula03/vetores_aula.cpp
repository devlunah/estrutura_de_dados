#include <stdio.h>
#include <string.h>
//int valores[5];
//int tamanho [5] = {10, 20, 30, 40, 50}; //vetor de inteiros

//printf ("%i\n", tamanho[0]); //leitura de uma posi��o do vetor

//for (int i = 0; i < 5; i++){  //leitura completa de um vetor
	//printf ("%i \n", tamanho[i]);
//}

 //float notas[4] = {4.6, 7.3, 8.0, 10}; //vetor ponto flutuante
// for (int i = 0; i < 4; i++) {
 //	if (notas[i] >= 7){
 	//	printf ("Aprovado. Nota: %i \n", notas[i]);
	 //}else{
	 //	printf ("Reprovado. Nota: %i \n", notas[i]);
	// }
 //}
 
int main() {
	

 char nome [] = "Brasil"; //vetor sem tamanho explicito
 int tamanho_vetor = strlen(nome); //fun��o strlen() utilizada para contar o tamanho
 
 for (int i = 0; i < tamanho_vetor; i++){
 	printf("%c \n", nome[i]);
 }
 
 //acessar e modificar elementos de um vetor
 
 // exemplo de leitura de vetor com for:
 int numeros [5] = {10, 20, 30, 40, 50};
 int soma = 0;
 
 for (int i = 0; i<5; i++){
 	soma += numeros[i];
 }
 
 printf("Soma dos elementos: %d\n", soma);
 
 int maior = numeros[0];
 for (int i =1; i<5; i++){
 	if(numeros[i] > maior){
 		maior = numeros[i];
	 }
 }
 
 printf("Maior valor: %d\n", maior);
 
};
