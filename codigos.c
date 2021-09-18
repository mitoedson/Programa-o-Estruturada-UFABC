#include <stdio.h>

int main() {

    int codigo,produtos[100],conta_posicao_vetor,i,j,encerra_loop,troca_posicao;
    

    conta_posicao_vetor = 0;
    while(conta_posicao_vetor <= 9)
    {
        printf("Digite: ");
        scanf("%d",&codigo);
        if(conta_posicao_vetor == 0)
            produtos[conta_posicao_vetor] = codigo;
        else if(codigo == -1)
            break;
        else
            produtos[conta_posicao_vetor] = codigo;

        encerra_loop = 0;
        troca_posicao = 0;
        while(encerra_loop == 0 && conta_posicao_vetor != 0)
        {
            for(j=(conta_posicao_vetor-1); j>=0; j--)
            {
                if(produtos[j] > produtos[j+1])
                {
                    troca_posicao = produtos[j];
                    produtos[j] = produtos[j+1];
                    produtos[j+1] = troca_posicao;
                }
            }
            if(j < 0)
                encerra_loop = 1;
        }

        for(i=0;i<=conta_posicao_vetor;i++)
        {
            printf("%d",produtos[i]);
            if(i<conta_posicao_vetor)
                printf(" ");
        }
        printf("\n");
        conta_posicao_vetor++;        
    }

    return 0;
}
