#include <stdio.h>

int ordenador(int *vetor,int N){
    int i,j,k,elemento_menor,troca_ordem,contador = 0, guarda_posicao = 0;
    for(k = 0; k < N; k++){
        printf("%d", vetor[k]);
        if(k != N - 1)
            printf(" ");
    }
    printf("\n");

    for(i = 0; i < (N - 1); i++){
        elemento_menor = *(vetor + i);
        for(j = i + 1; j < N; j++){
            if(elemento_menor > *(vetor + j)){
                elemento_menor = *(vetor + j);
                guarda_posicao = j;
            }
        }
        if(guarda_posicao != 0){
            *(vetor + guarda_posicao) = *(vetor + i);
            *(vetor + i) = elemento_menor;
            guarda_posicao = 0;
            contador++;
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

    return contador;
    
}

int main(){
    int N,i;
    scanf("%d", &N);
    int elementos[N];
    for(i = 0; i < N; i++)
        scanf("%d", &elementos[i]);

    printf("%d\n",ordenador(elementos,N)); 
}
