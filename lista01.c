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


int main(){
/*
    LinkedNode item1;
    item1.data = 10;

    LinkedNode item2;
    item2.data = 20;

    LinkedNode item3;
    item3.data = 30;

    item1.next = &item2;
    item2.next = &item3;
    item3.next = NULL;
*/
    LinkedNode *item1 = malloc(sizeof(LinkedNode));
    item1->data = 10;

    LinkedNode *item2 = malloc(sizeof(LinkedNode));
    item2->data = 20;

    LinkedNode *item3 = malloc(sizeof(LinkedNode));
    item3->data = 30;

    item1->next = item2;
    item2->next = item3;
    item3->next = NULL;


    imprimir(item1);

    imprimir2(item1);

    free(item1);
    free(item2);
    free(item3);

    return 0;
}
