#include <stdio.h>

int main(){
    // Leia 10 números e calcule a média
    
    float numeros [10];
    
    printf("Insira 10 numeros: ");
    for (int i = 0; i < 10; i++) {
		scanf("%f", & numeros[i]);
	}
    
    int tamanhoArray = sizeof(numeros)/sizeof(numeros[0]);

    float soma = 0;
    
    for(int i = 0; i < tamanhoArray; i++){
        soma += numeros[i];
        // printf("%.2f \n", soma); controle da variável
    }

    float media_numeros = soma / tamanhoArray;

    printf("Média final = %.2f \n", media_numeros);

}
