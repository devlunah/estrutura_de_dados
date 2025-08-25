#include <stdio.h>

int main(){
    // Leia 10 numeros e imprima na ordem inversa

    int numeros [10];
    
    printf("Insira 10 numeros: ");
    for (int i = 0; i < 10; i++) {
		scanf("%d", & numeros[i]);
	}

    for (int i = 9; i >= 0; i--){
        printf("%d \n", numeros[i]);

    }
}
