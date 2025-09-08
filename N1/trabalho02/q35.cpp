#include <stdio.h>
#include <stdlib.h>

int imprimir_decrescente(int n){
    if(n == 0){
        return n;

    }else{
        printf("%d ", n);
        imprimir_decrescente(n - 1);
    }
    return 0;
}

int main(){

    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("Numero crescente: ");
    imprimir_decrescente(num);

}