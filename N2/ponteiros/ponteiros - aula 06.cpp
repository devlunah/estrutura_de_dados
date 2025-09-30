//aula 06 - ponteiros

#include <stdio.h>

/*
main(){
	//exemplo 1:
	int x =42; //variável comum
	int *p = &x; //ponteiro 'p' recebe o endereço de 'x'
	
	printf("%d \n", x); //imprime o valor de x
	printf("%d \n", &x); //imprime o endereço de x
	printf("%d \n", p); //imprime o endereço armazenado em p (mesmo de x)
	printf("%d \n", *p); //imprime o valor apontado por p (mesmo de x)
	
}
*/

/*
//exemplo 2
void dobrar(int *num){
	*num *= 2;
}

main(){
	
	int valor = 5;
	//a variável valor é inserida como parametro na função dobrar
	//porém, na função o parametro num é um ponteiro (*num)
	//por isso, ao chamar a função e passar valor como parametro é preciso fazer &valor, para pegar o que está armazenado nesse endereço
	dobrar(&valor);
	
	// assim, vai ser passado o valor armazenado nesse endereço de memória, e *num vai pegar esse valor
	
	printf("Valor dobrado: %d \n", valor);
	
}
*/


//exemplo 3
/*
int soma (int *a, int *b){
	int soma = *a + *b;
	return soma;
	
}

main(){
	int num1 = 4;
	int num2 = 6;
	
	printf("Resultado da soma: %d", soma(&num1, &num2));
	
}
*/

//exemplo 04
/*
main(){
	int vetor[5];
	int *endereco[5];
	int i;
	
	printf("Digite os 5 numeros para preencher o vetor: \n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
		endereco[i] =&vetor[i];
		
	}
	
	for(i = 0; i < 5; i++){
		printf("O valor %d no vetor esta no endereco de memoria %d \n", vetor[i], endereco[i]);
		
	}
}
*/

//teste com ponteiros:
//calcular uma exponenciação de numero x com expoentes de 1 a 10

void potenciacao (int *num, int *array){
	int result;
	for(int i = 0; i < 10; i++){
		if(i == 0){
			result = *num * 1;
		} else{
			result = *num * result;
		}
		//printf("-- %d\n", result);
		array[i] = result;
	}	
}

main(){
	int base;
	int array_result [10];
	
	printf("Insira o numero base: ");
	scanf("%d", &base);
	
	potenciacao(&base, array_result);
	
	for(int i = 0; i < 10; i++){
		printf("Potencia de %d: %d \n", base, array_result[i]);
	}
}



