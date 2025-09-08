#include <stdio.h>
#include <stdlib.h>

int imprimir_crescente(int n){
    if(n == 0){
        return n;

    }else{
        imprimir_crescente(n - 1);
        printf("%d ", n);
    }
    return 0;
}

int main(){

    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("Numero crescente: ");
    imprimir_crescente(num);

}