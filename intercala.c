#include <stdio.h>
#include <stdlib.h>

void *imprime_sequencia(int n1, int n2, int *v1, int *v2){

    int i = 0, j = 0, k = 0, encerra_n1 = 0, encerra_n2 = 0;
    int *sequencia = malloc(sizeof(int) * (n1+n2));

    while(encerra_n1 == 0 || encerra_n2 == 0){
        if(*(v1 + i) <= *(v2 + j) && i < n1){
            *(sequencia + k) = *(v1 + i);
            i++;
            k++;
        }
        else if(*(v2 + j) <= *(v1 + i) && j < n2){
            *(sequencia + k) = *(v2 + j);
            j++;
            k++;
        }
        else if(i == n1){
            *(sequencia + k) = *(v2 + j);
            j++;
            k++;
        }
        else if(j == n2){
            *(sequencia + k) = *(v1 + i);
            i++;
            k++;
        }

        if(i == n1)   
            encerra_n1 = 1;
        if(j == n2)   
            encerra_n2 = 1;
    }

    k = 0;
    for(k = 0; k < (n1+n2); k++){
        printf("%d",*(sequencia + k));
        if(k < (n1+n2))
            printf(" ");
    }
    printf("\n");

    free(sequencia);
}

int main(){

    int i,j,n1,n2;

    printf("Numero de elementos no vetor 1:");
    scanf("%d",&n1);
    int *v1 = malloc(sizeof(int) * n1);
    for(i = 0; i < n1; i++)
        scanf("%d",(v1 + i));
 
    printf("\nNumero de elementos no vetor 2:");
    scanf("%d",&n2);
    int *v2 = malloc(sizeof(int) * n2);
    for(j = 0; j < n2; j++)
        scanf("%d",(v2 + j));

    imprime_sequencia(n1,n2,v1,v2);
 
    free(v1);
    free(v2);
    
    return 0;
}
