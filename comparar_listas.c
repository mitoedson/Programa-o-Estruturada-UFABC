#include <stdio.h>
#include <stdlib.h>
//#include "comparar_listas.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode{
    int data;
    LinkedNode *next;
};

int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2) {

    LinkedNode *atual1 = inicio_lista1;
    LinkedNode *atual2 = inicio_lista2;

    if((atual1 == NULL && atual2 != NULL) || (atual2 == NULL && atual1 != NULL))
       return 0;

    while(atual1 != NULL || atual2 != NULL){

        if(atual1->data != atual2->data)
            return 0;
        
        atual1 = atual1->next;
        atual2 = atual2->next;
        if((atual1 == NULL && atual2 != NULL) || (atual2 == NULL && atual1 != NULL))
            return 0;
    }
    return 1;
}

void imprimir(LinkedNode *inicio){
    LinkedNode *atual;
    for(atual = inicio; atual != NULL; atual = atual->next)
        printf("%d ", atual->data);
    printf("\n");    
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
    LinkedNode *inicio_lista1 = NULL;
    LinkedNode *inicio_lista2 = NULL;


    inicio_lista1 = inserir_final(inicio_lista1,10);
    inicio_lista1 = inserir_final(inicio_lista1,20);
    inicio_lista1 = inserir_final(inicio_lista1,30);
    inicio_lista1 = inserir_final(inicio_lista1,0);
 

    inicio_lista2 = inserir_final(inicio_lista2,10);
    inicio_lista2 = inserir_final(inicio_lista2,20);
    inicio_lista2 = inserir_final(inicio_lista2,30);
    inicio_lista2 = inserir_final(inicio_lista2,0);


    imprimir(inicio_lista1);
    imprimir(inicio_lista2);

    printf("%d",comparar_listas(inicio_lista1,inicio_lista2));

    return 0;
}
