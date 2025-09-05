#include <stdio.h>
#include <stdlib.h>

//

int main(){
    int num_inteiros [10];
    int num_busca;
    bool num_encontrado = false;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
	    scanf("%d", &num_inteiros[i]);
    }

    printf("Que numero voce deseja buscar? ");
	scanf("%d", &num_busca);


    for(int num = 0; num < 10; num++){
        if(num_inteiros[num] == num_busca){  
            num_encontrado = true;
        }
    
        if(num_encontrado == true){
            printf("Numero encontrado");
            break;
        }
    }

    if(num_encontrado == false){
        printf("O numero inserido nao foi encontrado no vetor.");
    }

    return 0;
}