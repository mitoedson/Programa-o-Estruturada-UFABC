#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode{
    int data;
    LinkedNode *next;
};


void imprimir(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while (atual != NULL){
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");    
}


void imprimir2(LinkedNode *inicio){
    LinkedNode *atual;
    for(atual = inicio; atual != NULL; atual = atual->next)
        printf("%d ", atual->data);

    printf("\n");    
}


LinkedNode *inserir_final(LinkedNode *inicio, int valor){

    LinkedNode *novo = malloc(sizeof(LinkedNode));
    if (novo == NULL) return inicio;

    novo->data = valor;
    novo->next = NULL;

    if (inicio == NULL) return novo;

    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;

    while (atual != NULL){
        anterior = atual;
        atual = atual->next;
    }

    anterior->next = novo;
    return inicio;
}


LinkedNode *inserir_final_r(LinkedNode *inicio, int valor){
    if(inicio == NULL){
        LinkedNode *novo = malloc(sizeof(LinkedNode));
        if(novo == NULL) return inicio;
            novo->data = valor;
            novo->next = NULL;
            return novo;
    }
    inicio->next = inserir_final_r(inicio->next, valor);
    return inicio;
}

int main(){
    LinkedNode *inicio = NULL;

    inicio = inserir_final(inicio,10);
    inicio = inserir_final(inicio,20);
    inicio = inserir_final(inicio,30);
    inicio = inserir_final(inicio,40);
    inicio = inserir_final(inicio,50);
    inicio = inserir_final(inicio,60);


    inicio = inserir_final_r(inicio,10);
    inicio = inserir_final_r(inicio,20);
    inicio = inserir_final_r(inicio,30);

    imprimir(inicio);

    return 0;
}
