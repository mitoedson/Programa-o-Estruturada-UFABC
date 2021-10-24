#include <stdio.h>
#include <stdlib.h>

double **criar_matriz(int n_linhas, int n_colunas) {
    int i = 0,j = 0, c = 0;
    double **matriz_m;
    matriz_m = malloc(sizeof(double *) * n_linhas);

    for (i = 0; i < n_linhas; i++) {
        matriz_m[i] = malloc(sizeof(double) * n_colunas);

        for (j = 0; j < n_colunas; j++){
            if(i%2 == 0)
                (j%2 != 0) ? (matriz_m[i][j] = 1) : (matriz_m[i][j] = 0);
            else
                (j%2 != 0) ? (matriz_m[i][j] = 0) : (matriz_m[i][j] = 1);
        }
    }
    return matriz_m;
}

void liberar_matriz(double **matriz, int n_linhas) {
    int i;
    for(i = 0; i < n_linhas; i++)
        free(matriz[i]);
    free(matriz);
}

void imprimir(double **matriz, int n_linhas, int n_colunas) {
    int l, c;
    for (l = 0; l < n_linhas; l++) {
        for (c = 0; c < n_colunas; c++)
            printf("%.0lf ", matriz[l][c]);
        printf("\n");
    }
   
}

int main() {
    
    int n_linhas, n_colunas;
    scanf("%d %d", &n_linhas, &n_colunas);
    
    double **m = criar_matriz(n_linhas, n_colunas);
    
    imprimir(m, n_linhas, n_colunas);
    
    liberar_matriz(m, n_linhas);
    
    return 0;
}
