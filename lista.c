#include <stdio.h>
#include <stdlib.h>
//#include "lista.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode{
    int data;
    LinkedNode *next;
};

void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares){
    LinkedNode *atual;
    *qtd_impares = 0;
    *qtd_pares = 0;

    for(atual = inicio; atual != NULL; atual = atual->next){
        if((atual->data) % 2 == 0)
            *qtd_pares += 1;
        else
            *qtd_impares += 1;
    }
}

LinkedNode *inserir_final(LinkedNode *inicio, int valor){
    if(inicio == NULL){
        LinkedNode *novo = malloc(sizeof(LinkedNode));
        if(novo == NULL) return inicio;
            novo->data = valor;
            novo->next = NULL;
            return novo;
    }
    inicio->next = inserir_final(inicio->next, valor);
    return inicio;
}


int main(){
    LinkedNode *inicio = NULL;
    int *qtd_impares = malloc(sizeof(int));
    int *qtd_pares = malloc(sizeof(int));

    inicio = inserir_final(inicio,10);
    inicio = inserir_final(inicio,21);
    inicio = inserir_final(inicio,30);
    inicio = inserir_final(inicio,40);
    inicio = inserir_final(inicio,50);

    impares_pares(inicio, qtd_impares, qtd_pares);

    return 0;
}
