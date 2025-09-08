#include <stdio.h>
#include <stdlib.h>

int soma_recursiva(int n){
    if(n == 1){
        return n;

    }else{
        return (n + soma_recursiva(n-1));
    }
}

int main(){

    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("Soma recursiva = %d", soma_recursiva(num));

    return 0;

}