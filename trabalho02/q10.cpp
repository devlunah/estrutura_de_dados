#include <stdio.h>
#include <stdlib.h>

//

int main(){
    float notas [10];
    
    printf("Insira 10 notas de alunos: \n");
    for (int i = 0; i < 10; i++){
        printf("Nota: ");
	    scanf("%f", &notas[i]);
    }

    int contagem_aprovados = 0;

    for(int contador = 0; contador < 10; contador++){
        if(notas[contador] >= 7){
            contagem_aprovados++;
        }
    }

    printf("Total de alunos aprovados: %d", contagem_aprovados);

    return 0;

}