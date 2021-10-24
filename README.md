<h1>07. Ponteiros - parte 3</h1>
<h3>Listas produzidas</h3>:

<h4>01. Alocação dinâmica de matriz:</h4>
Escreva as funções criar_matriz e liberar_matriz.
<p>
A função criar_matriz deve alocar e retornar uma matriz com as dimensões especificadas nos parâmetros n_linhas e n_colunas. A matriz deve ser preenchida com zeros e uns de forma intercalada, conforme o exemplo a seguir (n_linhas=3 e n_colunas=4):
<pre>
0 1 0 1
1 0 1 0
0 1 0 1
</pre>
A função liberar_matriz recebe o ponteiro para uma matriz e deve liberá-la da memória (free).
<p>
Protótipos das funções:
<pre>
double **criar_matriz(int n_linhas, int n_colunas);
void liberar_matriz(double **matriz, int n_linhas);
</pre>
Importante: submeta apenas as funções. Não use variáveis globais. Não inclua o main. Não use printf/puts/fprintf/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
Programa usado para chamar as funções criar_matriz e liberar_matriz (este programa já está implementado no sistema de correção automática):
<pre>
#include <stdio.h>
#include "matriz.h"

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
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:
<pre>
n_linhas n_colunas
</pre>
Saída:
<pre>
matriz alocada
</pre>


<h4>02. Multiplicação de matrizes:</h4>
Escreva um programa que lerá duas matrizes A e B e depois imprime o resultado da multiplicação das matrizes.
<p>
Entrada:
<pre>
n_linhas_A n_colunas_A
dados da matriz A (linha por linha)
n_linhas_B n_colunas_B
dados da matriz B (linha por linha)
</pre>
Saída:
<pre>
matriz resultado da multiplicação A x B
</pre>
Importante: utilize malloc para alocar vetores ou matrizes (não declare vetor ou matriz com colchetes). Para acessar as posições no vetor, pode usar colchetes neste exercício. Não use variáveis globais.
<p>
Lembre-se de liberar toda memória alocada com malloc/calloc!

