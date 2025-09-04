#include <stdio.h>
#include <stdlib.h>

//

int main(){

    char nomes [5][50];

    for(int linha = 0; linha < 5; linha++){
        printf("Insira um nome: ");
        scanf(" %s", &nomes[linha]);
    }

    for(int i = 4; i >= 0; i--){
        printf(" %s", &nomes[i]);
    }
}