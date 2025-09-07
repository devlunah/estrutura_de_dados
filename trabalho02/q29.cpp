#include <stdio.h>
#include <stdlib.h>

/*
Crie uma função contar_caracteres que receba uma string (char*). 
Use um laço de repetição (for ou while) para percorrer a string até encontrar o caractere nulo 
'\0' e conte a quantidade de caracteres. Retorne a contagem.
*/

int contar_caracteres (char*, int tam){
    int contador_caractere = 0;

    for (int i = 0; i < tam-1; i++){
        contador_caractere++;
    }

    return contador_caractere;
}

int main(){

    char texto []= {"teste de texto para contar"};

    int tamanho = sizeof(texto)/sizeof(texto[0]);

    printf("Total de caracteres: %d", contar_caracteres(texto, tamanho));

}