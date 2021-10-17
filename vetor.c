#include <stdio.h>
#include <stdlib.h>

int *duplica_impares(int *v, int n_entrada, int *n_retorno) {
    
    int i,j;
    *n_retorno = n_entrada;

    for(i = 0; i < n_entrada; i++){
        if(v[i] % 2 != 0)
            *n_retorno +=  1;
    }

    int *duplicado = malloc(sizeof(int) * (*n_retorno));

    i = 0, j = 0;
    while(i <= n_entrada){
        if(v[i] % 2){
            duplicado[j] = v[i];
            j++;
        }
        duplicado[j] = v[i];
        i++;
        j++;
    }    

    return duplicado;
}

int main(){

    int n_entrada, i;
    int *n_retorno = malloc(sizeof(int));
    printf("Quantidade de elementos no vetor: ");
    scanf("%d",&n_entrada);
    
    int *v = malloc(sizeof(int) * n_entrada);
    for(i = 0; i < n_entrada; i++){
        scanf("%d",&v[i]);
    }
    
    int *w = duplica_impares(v,n_entrada,n_retorno);
 
    for(i = 0; i < *n_retorno; i++)
        printf("%d",w[i]);

    free(v);
    free(w);

    return 0;
}
