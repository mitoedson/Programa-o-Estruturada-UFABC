#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c)
{
    int coluna_sequencia,l,m;
    for(l = 1; l < n; l++)
    {
        coluna_sequencia = 0;
        for(m = 0; m < n; m++)
        {
            if(m != c)
            {
                m_saida[l-1][coluna_sequencia] = m_entrada[l][m];
                coluna_sequencia++;
            }
        }
    }
}

float calcula_determinante(int n, float m_entrada[n][n])
{
    int k = 0;
    float m_saida[n-1][n-1], acumulado = 0;
    
    if(n == 1)
        return m_entrada[0][0];
    else
    {
        for(k = 0; k < n; k++)
        {
            remove_primeira_linha_e_coluna_c(n,m_entrada,m_saida,k);
            if(k%2 == 0)
                acumulado += m_entrada[0][k] * calcula_determinante(n-1,m_saida);
            else
                acumulado += (-1) * m_entrada[0][k] * calcula_determinante(n-1,m_saida);
        }
        return acumulado;
    }
}

int main()
{
    int n,i,j;
    scanf("%d",&n);

    float matriz_entrada[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f",&matriz_entrada[i][j]);
        }
    }
    printf("%.2f\n",calcula_determinante(n,matriz_entrada));
}
