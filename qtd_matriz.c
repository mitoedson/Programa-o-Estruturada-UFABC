#include <stdio.h>

int main(){

    int linha1,linha2,coluna1,coluna2,i0,j0,i1,j1,i2,j2,conta_matrizes = 0,conta_diferencas = 0;

    scanf("%d",&linha1);
    scanf("%d",&coluna1);

    int matriz1[linha1][coluna1];
    for(i0 = 0; i0 < linha1; i0++)
    {
        for(j0 = 0; j0 < coluna1; j0++)
        {
            scanf("%d",&matriz1[i0][j0]);
        }
    }

    scanf("%d",&linha2);
    scanf("%d",&coluna2);
    int matriz2[linha2][coluna2];
    for(i0 = 0; i0 < linha2; i0++)
    {
        for(j0 = 0; j0 < coluna2; j0++)
        {
            scanf("%d",&matriz2[i0][j0]);
        }
    }

    for(i1 = 0; i1 <= (linha1 - linha2); i1++)
    {
        for(j1 = 0; j1 <= (coluna1 - coluna2); j1++)
        {

            for(i2 = 0; i2 < linha2; i2++)
            {
                for(j2 = 0; j2 < coluna2; j2++)
                {
                    if(matriz2[i2][j2] != matriz1[i2+i1][j2+j1])
                        conta_diferencas++;
                }
             }
            if(conta_diferencas == 0)
            {
                conta_matrizes++;
            }
            conta_diferencas = 0;
        }
    }
    printf("%d",conta_matrizes);

return 0;
}
