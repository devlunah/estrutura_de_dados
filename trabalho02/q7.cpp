#include <stdio.h>
#include <stdlib.h>

//

int main(){
    int num_inteiros [6];
    int contador_negativos = 0;

    for (int i = 0; i < 6; i++){
        printf("Digite um numero: ");
	    scanf("%d", &num_inteiros[i]);
    }

    for(int num = 0; num < 6; num++){
        if(num_inteiros[num] < 0){
            contador_negativos++;
        }
    }

    printf("Quant. de numeros negativos: %d", contador_negativos);

    return 0;

}