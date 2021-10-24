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

Alocar vetor no parâmetro
Data de entrega: quarta, 3 Nov 2021, 23:59
Arquivos requeridos: vetor.c (Baixar)
Tipo de trabalho: Trabalho individual
Escreva a função intercala_vetores que recebe dois vetores v_a (tamanho n_a) e v_b (tamanho n_b) e aloca um novo vetor. O novo vetor deve possuir todos os números dos dois vetores de entrada em ordem crescente, intercalando os valores dos dois vetores. Assuma que os dois vetores estão ordenados em ordem crescente. Por exemplo, se os vetores passados nos parâmetros forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], a função deverá alocar [1, 2, 5, 5, 7, 8, 12, 46, 90]. O vetor alocado deve ser retornado pelo parâmetro **v. Além disso a função retorna (return) o tamanho do vetor alocado.

Protótipo da função:

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v);


Exemplo de código que pode ser usado para testar a chamada da função intercala_vetores (observação: deve ser submetida apenas a função intercala_vetores neste exercício, o código a seguir é apenas um exemplo para testar a função localmente):

int *v_a = malloc(sizeof(int) * 3);
v_a[0] = 10;
v_a[1] = 30;
v_a[2] = 50;
int *v_b = malloc(sizeof(int) * 2);
v_b[0] = 20;
v_b[1] = 40;
int *v_r;
int n_r = intercala_vetores(v_a, 3, v_b, 2, &v_r);
int i;
for (i = 0; i < n_r; i++)
	printf("%d ", v_r[i]);
free(v_a);
free(v_b);
free(v_r);


Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/fprintf/scanf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.



Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.

Entrada:

n_a
elementos do vetor v_a
n_b
elementos do vetor v_b
Saída:

elementos do vetor v_a
elementos do vetor v_b
elementos do vetor alocado pela função (com os valores de v_a e v_b intercalados e em ordem crescente)
Arquivos requeridos
vetor.c
