#include <stdio.h>
#include <stdlib.h>

// Contar múltiplos de 3
/* Leia 12 números inteiros em um vetor e conte quantos deles são múltiplos de 3. Exiba o total. */

int main(){

    int num [12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int contador_multiplos = 0;

    for(int i = 0; i < 12; i++){
        if(num[i] % 3 == 0){
            contador_multiplos++;
            printf("%d \n", num[i]);
        }
    }

    printf("Total de multiplos: %d", contador_multiplos);
}