#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores[8] = {4, 7, 2, 4, 8, 4, 7, 9};
    int i, j, duplicados = 0;
    int contados[8] = {0}; // Marca elementos já contados

    for (i = 0; i < 8; i++) {

        if (contados[i] == 1) continue;
        
        for (j = i + 1; j < 8; j++) {
        
            if (valores[i] == valores[j] && contados[j] == 0) {
            
                duplicados++;
                contados[j] = 1;
            }
        }
    }
    for(int c = 0; c < 8; c++){
        printf("%d", contados[c]);

    }
    
}