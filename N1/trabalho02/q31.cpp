#include <stdio.h>
#include <stdlib.h>

int fatorial_recursivo(int n){
    int resultado;
    if(n == 0 || n == 1){
        resultado = 1;
    }else{
        resultado = n * fatorial_recursivo(n-1);
    }

    return resultado;

}

int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("%d! = %d", num, fatorial_recursivo(num));

    return 0;

}