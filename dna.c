#include <stdio.h>
#include <stdlib.h>
//#include "dna.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   char data;
   LinkedNode *next;
};

void imprimir(LinkedNode *inicio){
    LinkedNode *atual;
    for(atual = inicio; atual != NULL; atual = atual->next)
        printf("%c", atual->data);
    printf("\n");    
}


LinkedNode *remover_bases(LinkedNode *inicio){

    int contador = 0, i = 0;
    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;

    if(inicio == NULL)
        return inicio;

    while (atual != NULL){
        anterior = atual;
        if(atual->data == 'C' || atual->data == 'G'){
            contador++;
        }
        atual = atual->next;
    }

    for(i = 0; i < contador; i++){
        anterior = NULL;
        atual = inicio;

        while (atual != NULL && (atual->data != 'C' && atual->data != 'G')){
            anterior = atual;
            atual = atual->next;
        }
        if (atual != NULL) {
            if (anterior != NULL)
                anterior->next = atual->next;
            else
                inicio = atual->next;

            free(atual);
        }

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

    inicio = inserir_final(inicio,'G');
    inicio = inserir_final(inicio,'T');
    inicio = inserir_final(inicio,'A');
    inicio = inserir_final(inicio,'A');
    inicio = inserir_final(inicio,'A');
    inicio = inserir_final(inicio,'A');
    inicio = inserir_final(inicio,'T');
    inicio = inserir_final(inicio,'C');

    inicio = remover_bases(inicio);

    imprimir(inicio);


    return 0;
}
