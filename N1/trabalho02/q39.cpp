#include <stdio.h>
#include <stdlib.h>

int contar_digitos(int num){
    if(num < 10){
        return 1;

    }else{
        return (1 + contar_digitos(num / 10));
    }

}
int main(){
    int num;
	printf("Digite um numero: ");
	scanf("%d", &num);

    printf("Numero total de digitos: %d", contar_digitos(num));

    return 0;
}