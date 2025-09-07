#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool eh_par(int num){
    bool result = false;
    if(num % 2 == 0){
        result = true;
        return result;
    }else{
        return result;
    }

}

int main(){
    int x;
    printf("Insira um numero: ");
    scanf("%d", &x);

    printf("Numero eh par? (1-true 0-false) %d", eh_par(x));

    return 0;

}