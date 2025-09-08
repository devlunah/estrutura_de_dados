#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if(n == 1 || n == 0){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
	int num;
	printf("Digite o numero do termo da sequencia de fibonacci: ");
	scanf("%d", &num);
	
	printf("Sequencia de fibonacci ate o %d° termo: \n", num);
	
	for (int i = 0; i <= num; i++){
		printf("%d", fibonacci(i));
		
	}
	printf("\n");
	return 0;
	
}