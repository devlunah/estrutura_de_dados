#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int num_inteiros [10];
    
    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
	    scanf("%d", &num_inteiros[i]);
    }

    int maior_valor = num_inteiros[0];
    int menor_valor = num_inteiros[0];

    for(int a = 0; a < 10; a++){
        if (num_inteiros[a] > maior_valor){
            maior_valor = num_inteiros[a];
        } else if (num_inteiros[a] < menor_valor) {
            menor_valor = num_inteiros[a];
        }
    }

    printf("Maior valor: %d e Menor valor: %d", maior_valor, menor_valor);

    return 0;

}