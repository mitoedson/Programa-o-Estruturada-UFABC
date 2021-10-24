#include <stdio.h>
#include <stdlib.h>

int **criar_matriz(int n_linhas, int n_colunas) {
    int i = 0,j = 0, c = 0;
    int **matriz_m;
    matriz_m = malloc(sizeof(int *) * n_linhas);

    for (i = 0; i < n_linhas; i++) {
        matriz_m[i] = malloc(sizeof(int) * n_colunas);

        for (j = 0; j < n_colunas; j++){
            scanf("%d",&matriz_m[i][j]);
        }
    }
    return matriz_m;
}

void multiplica_matrizes(int **matriz_a, int **matriz_b, int n_linhas1, int n_colunas1, int n_linhas2, int n_colunas2) {
    int i = 0,j = 0, k = 0, calcular = 0;
    for (i = 0; i < n_linhas1; i++) {
        calcular = 0;
        for (j = 0; j < n_colunas2; j++){

            for (k = 0; k < n_colunas1; k++){
                calcular += matriz_a[i][k] * matriz_b[k][j];
            }
            printf("%d",calcular);
            if(j < n_colunas2 - 1)
                printf(" ");
            calcular = 0;
        }
        if(i < n_linhas1 - 1)
            printf("\n");
    }
}


void liberar_matriz(int **matriz, int n_linhas) {
    int i;
    for(i = 0; i < n_linhas; i++)
        free(matriz[i]);
    free(matriz);
}

int main() {
    
    int n_linhas_a, n_colunas_a;
    scanf("%d %d", &n_linhas_a, &n_colunas_a);
    int **m_a = criar_matriz(n_linhas_a, n_colunas_a);

    int n_linhas_b, n_colunas_b;
    scanf("%d %d", &n_linhas_b, &n_colunas_b);
    int **m_b = criar_matriz(n_linhas_b, n_colunas_b);

    multiplica_matrizes(m_a, m_b, n_linhas_a, n_colunas_a, n_linhas_b, n_colunas_b);

    liberar_matriz(m_a, n_linhas_a);
    liberar_matriz(m_b, n_linhas_b);
   
    return 0;
}
