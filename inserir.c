#include <stdio.h>
#include <stdlib.h>
//#include "inserir.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode{
    int data;
    LinkedNode *next;
};

void imprimir(LinkedNode *inicio){
    LinkedNode *atual;
    for(atual = inicio; atual != NULL; atual = atual->next)
        printf("%d ", atual->data);
    printf("\n");    
}

LinkedNode* inserir_posicao(int posicao, int valor, LinkedNode *inicio){

    int indexador = 0;

    // novo insere na lista inicio
    LinkedNode *novo = malloc(sizeof(LinkedNode));
    if (novo == NULL) return inicio;
    novo->data = valor;
    novo->next = NULL;

    if (inicio == NULL) return novo;
    LinkedNode *atual = inicio;

    while(atual != NULL){
        // se for na posicao 0 da lista, novo eh inserido a partir do next para o inicio
        if(posicao == 0){
            novo->next = atual;
            // novo encabeca a lista por isso ele retorna como novo
            return novo;
        }
        // se for na posicao != 0 da lista, o inicio da lista seguinte eh encadeado com o final do novo
        // e o final da lista corrente encadeia com o inicio do novo
        else if(posicao == (indexador + 1)){
            novo->next = atual->next;
            atual->next = novo;
        }
        // faz o salto para a proxima lista
        atual = atual->next;
        // contador para posicao da lista
        indexador++;
    }

    return inicio;
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
    int posicao = 0;
    int valor = 55;

    inicio = inserir_final(inicio,10);
    inicio = inserir_final(inicio,20);
    inicio = inserir_final(inicio,30);
    inicio = inserir_final(inicio,40);
    inicio = inserir_final(inicio,50);
    imprimir(inicio);


    inicio = inserir_posicao(posicao, valor, inicio);

    imprimir(inicio);
    return 0;
}
