#include <stdio.h>
#include <stdlib.h>

//

int main(){

    int num_inteiros [10];
    
    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
	    scanf("%d", &num_inteiros[i]);
    }

    for(int a = 0; a < 10; a++){
        if (num_inteiros[a] % 2 == 0){
            printf("%d \n", num_inteiros[a]);
        }
    }
}