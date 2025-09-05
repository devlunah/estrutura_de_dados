#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_inteiros [10];
    
    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
	    scanf("%d", &num_inteiros[i]);
    }

    int num_pares [10];
    int num_impares [10];
    int contador_par = 0;
    int contador_impar = 0;

    for(int i = 0; i < 10; i++){

        if(num_inteiros[i] % 2 == 0){ 
            num_pares[contador_par] = num_inteiros[i];
            contador_par++;

        }else{
            num_impares[contador_impar] = num_inteiros[i];
            contador_impar++;
        }
        
    }

    for(int a = 0; a < 10; a++){
        printf("Vetor original: %d \n", num_inteiros[a]);
    }
    printf("Numeros pares: ");
    for (int i = 0; i < contador_par; i++) {
        printf("%d ", num_pares[i]);
    }

    printf("\nNumeros ímpares: ");
    for (int i = 0; i < contador_impar; i++) {
        printf("%d ", num_impares[i]);
    }

    return 0;

}