#include <stdio.h>

int main(){
    // Some dois vetores de 5 elementos e armazene em um terceiro.

    int vetor1 [10] = {2, 4, 6, 8, 10};
    int vetor2 [5] = {3, 6, 9, 12, 15};
    int vetor_resultado [1];
    int soma = 0;
    int a = 0;
    
    //juntar os dois vetores em um único (vetor1)
    for (int i = 5; i < 10; i++){
        vetor1[i] = vetor2[a];
        a++;        
        //printf("%d \n", vetor1[i]);
    }
    
    printf("Numeros para soma: \n");
    //mostrar o valor dos vetores agora unidos
    for (int i = 0; i < 10; i++){
        printf("%d \n", vetor1[i]);
    }
	
	//fazer a soma dos elementos do vetor1
    for(int b = 0; b < 10; b++){
        soma += vetor1[b];
        //printf("\n %d \n", soma);
    }
	
	//armazenar o resultado no vetor_resultado
    for(int c = 0; c < 1; c++){
        vetor_resultado[c] = soma;
        printf("Resultado: %d \n", vetor_resultado[c]);

    }

}
