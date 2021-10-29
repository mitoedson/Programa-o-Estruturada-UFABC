#include <stdio.h>

int ordenador(int *vetor,int N){
    int i,j,k,elemento_atual,troca_ordem,comparacoes = 0, muda_linha = 0;
    for(k = 0; k < N; k++){
        printf("%d", vetor[k]);
        if(k != N - 1)
            printf(" ");
    }
    printf("\n");

    for(i = 1; i < N; i++){
        
        for(j = i - 1; j >= 0; j--){
            comparacoes++;
            if(vetor[j+1] < vetor[j]){
                troca_ordem = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = troca_ordem;
            }
            else
                break;
        }

        for(k = 0; k < N; k++){
            printf("%d", vetor[k]);
            if(k != N - 1)
                printf(" ");
        }
        printf("\n");
    }
    for(k = 0; k < N; k++){
        printf("%d", vetor[k]);
        if(k != N - 1)
            printf(" ");
    }
    printf("\n");

    return comparacoes;
    
}

int main(){
    int N,i;
    scanf("%d", &N);
    int elementos[N];
    for(i = 0; i < N; i++)
        scanf("%d", &elementos[i]);

    printf("%d\n",ordenador(elementos,N)); 
}
