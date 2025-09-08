#include <stdio.h>
#include <stdlib.h>

int potencia_recursiva(int base, int expoente){
    if(expoente == 0){
        return 1;
    } else{
        return base * potencia_recursiva(base, expoente - 1);
    }

}

int main(){

    int base, expoente;
    printf("Insira a base: ");
    scanf("%d", &base);

    printf("Insira um expoente: ");
    scanf("%d", &expoente);

    printf("Potencia de %d elevado a %d = %d", base, expoente, potencia_recursiva(base, expoente));

    return 0;

}