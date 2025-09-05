#include <stdio.h>
#include <stdlib.h>

//

int main(){
    
    int num_inteiros [5];
    int soma = 0;
    
    for (int i = 0; i < 5; i++){
        printf("Digite um numero: ");
	    scanf("%d", &num_inteiros[i]);
        soma += num_inteiros[i];

    }

    printf("Resultado da soma: %d \n", soma);

    return 0;

}
