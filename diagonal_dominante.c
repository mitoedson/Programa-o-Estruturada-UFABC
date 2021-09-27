#include <stdio.h>

int diagonal_dominante(int n, int m[][n]) {

    int i,j,diagonal = 0,soma_linha = 0,dominante = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if( i != j)
                soma_linha += m[i][j];
        }

        diagonal = m[i][i];
        if(diagonal < 0)
            diagonal *= -1;

        if(soma_linha < 0)
            soma_linha *= -1;

        if(diagonal > soma_linha)
            dominante++;

        soma_linha = 0;
    }

    if(dominante == n)
        return 1;
    else
        return 0;
}

int main(){

    int a, b[4][4];

    b[0][0] = 4;
    b[0][1] = 2;
    b[0][2] = -3;
    b[0][3] = -3;

    b[1][0] = 3;
    b[1][1] = 9;
    b[1][2] = 2;
    b[1][3] = 1;

    b[2][0] = 1;
    b[2][1] = 1;
    b[2][2] = 6;
    b[2][3] = 1;

    b[3][0] = 2;
    b[3][1] = 0;
    b[3][2] = 2;
    b[3][3] = 8;

    printf("%d",diagonal_dominante(4, b));

return 0;
}
