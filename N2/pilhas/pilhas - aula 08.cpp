#include <stdio.h>

#define MAX 100

typedef struct {
 int itens[MAX];
 int topo;
} Pilha;


void inicializar(Pilha *p) {
 p->topo = -1;
}

int isEmpty(Pilha *p) {
 return p->topo == -1;
}

int isFull(Pilha *p) {
 return p->topo == MAX - 1;
}

void push(Pilha *p, int valor) {
 if (!isFull(p)) {
 p->itens[++p->topo] = valor;
 printf("PUSH: %d\n", valor);
 } else {
 printf("ERRO: Pilha cheia. Nao e possivel empilhar %d\n", valor);
 }
}

int pop(Pilha *p) {
 if (!isEmpty(p)) {
 int valor = p->itens[p->topo--];
 return valor;
 }

 return -1; 
}


int main() {
    Pilha p;
    inicializar(&p);

    printf("Pilha esta vazia? %s\n", isEmpty(&p) ? "SIM" : "NAO");


    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    printf("Pilha esta vazia? %s\n", isEmpty(&p) ? "SIM" : "NAO"); 
    printf("Topo atual: %d\n", p.itens[p.topo]);

  
    int valor_removido = pop(&p);
    if (valor_removido != -1) {
        printf("POP: Valor removido = %d\n", valor_removido);
    }

    valor_removido = pop(&p);
    if (valor_removido != -1) {
        printf("POP: Valor removido = %d\n", valor_removido); 
    }
    
    printf("Topo atual: %d\n", p.itens[p.topo]); 

  
    pop(&p);
    pop(&p); 

    printf("Pilha esta vazia? %s\n", isEmpty(&p) ? "SIM" : "NAO");

    return 0;
}


