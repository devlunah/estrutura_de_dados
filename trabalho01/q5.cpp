#include <stdio.h>

int main(){
    // Leia 10 numeros e imprima na ordem inversa

    int numeros [10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    for (int i = 9; i >= 0; i--){
        printf("%d \n", numeros[i]);

    }
}