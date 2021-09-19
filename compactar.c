#include <stdio.h>

void compactar_vetor(int v[], int n) {

    int v_auxiliar[n],valor_atual,conta_atual,posicao_auxiliar,i,j;
    
    posicao_auxiliar = 0;
    valor_atual = v[0];
    conta_atual = 0;
    for(i = 0; i < n; i++)
    {
        if(v[i] == valor_atual)
        {
            conta_atual++;
            if(i == (n - 1))
            {
                v_auxiliar[posicao_auxiliar] = valor_atual;
                v_auxiliar[posicao_auxiliar + 1] = conta_atual;
                for(j = posicao_auxiliar + 2; j < n; j++)
                {
                    v_auxiliar[j] = -1;
                }                
            }
        }
        else
        {
            v_auxiliar[posicao_auxiliar] = valor_atual;
            v_auxiliar[posicao_auxiliar + 1] = conta_atual;

            if(v[i] != -1)
            {
                posicao_auxiliar += 2;
                conta_atual = 1;
                valor_atual = v[i];
            }
            else
            {
                for(j = posicao_auxiliar + 2; j < n; j++)
                {
                    v_auxiliar[j] = -1;
                }                
                break;
            }
        }
    }

    for(i = 0; i < n; i++)
        v[i] = v_auxiliar[i];
}


int main()
{
    int vetor1[20]={1,1,2,3,3,6,99,99,99,99,7,7,7,7,5,3,1,-1,-1,-1};
    int i;


    for(i=0;i<20;i++)
        printf("%d ",vetor1[i]);

    compactar_vetor(vetor1,20);
    printf("\n\n");

    for(i=0;i<20;i++)
        printf("%d ",vetor1[i]);

    printf("\n\n");
    return 0;
}
