#include <stdio.h>

int qtd_numeros_unicos(int v[], int n) {

    int i,j,conta_repeticao,valor_atual;

    conta_repeticao = 0;
    for(i = 0; i < n; i++)
    {
        if(v[i] > 0)
        {
            valor_atual = v[i];
            conta_repeticao--;

            for(j = 0; j < n; j++)
            {
                if(v[j] == valor_atual)
                    v[j] = conta_repeticao;
            }
        }
    }

    return (conta_repeticao * (-1));
}

int main()
{
    int vetor1[10]={1,1,10,4,1,6,7,8,9,10};

    printf("%d",qtd_numeros_unicos(vetor1,10));

    return 0;
}
