#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    int resultado = num;

    for(int i = num; i > 1; i--){
        resultado = resultado * (i-1);
    }

    return resultado;
    
}

int main(){
    int num_fatorial;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num_fatorial);

    printf("Resultado do fatorial de %d: %d", num_fatorial, fatorial(num_fatorial));

    return 0;

}