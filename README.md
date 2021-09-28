<h1>03. String, Matrizes</h1>
<h3>Listas produzidas</h3>:

<h4>01. Conta palavras:</h4>
Faça um programa que leia uma frase (no máximo 100 caracteres) e imprima a quantidade de palavras na frase lida.
<p><br>
Entrada:<br>
Este eh um teste.
<p>
Saída:<br>
4
<p>
Importante: Não use variáveis globais. Não use headers adicionais (por exemplo, string.h e stdlib.h). Apenas stdio.h é permitido.

<h4>02. Diagonal dominante</h4>
Escreva uma função que receba uma matriz quadrada e verifique se a matriz é estritamente diagonal dominante por linhas. Retorne 1 se for estritamente dominante por linhas e 0 caso contrário.
<p>
Uma matriz A é estritamente diagonal dominante por linhas se, em todas as linhas da matriz, o módulo do valor na diagonal principal é maior que a soma dos módulos dos demais valores da linha (no somatório: i: índice da linha, j: índice da coluna; n é a quantidade de colunas).
<p>
Fórmula:<br>
![image](https://user-images.githubusercontent.com/89589245/134942664-c0913f56-03b3-4ef0-9de3-c4033dabc100.png)
<p>
Protótipo da função:<br>
int diagonal_dominante(int n, int m[][n]);
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h e stdlib.h).
  
<h4>03. Verificar ordenação do tamanho das palavras</h4>
Implemente a função verificar_ordenacao_tamanho, que recebe uma string texto. A função deve verificar as palavras na string texto estão ordenadas pelo tamanho (quantidade de caracteres da palavra). A função deve retornar 1 se as palavras estiverem ordenadas em ordem crescente, retornar 2 se estiverem ordenadas em ordem descrescente ou retornar 3 se não estiverem ordenadas. Cada palavra na string texto é separada por um caractere espaço. A string texto pode possuir palavras com o mesmo tamanho, mas haverá pelo menos duas palavras com tamanhos diferentes na string.
<p><br>
Por exemplo:<br>
para a string "vetor ordenacao programacao", a função deve retornar 1<br>
para a string "programacao ordenacao vetor", a função deve retornar 2<br>
para a string "vetor programacao ordenacao", a função deve retornar 3<br>
<p>
Protótipo da função:<br>
int verificar_ordenacao_tamanho(char texto[]);
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h, stdlib.h e string.h).
<p>
Exemplo de como a leitura da string é realizada e depois passada para a função verificar_ordenacao_tamanho:
<p>
<pre>
#include <stdio.h>

int main() {
  char texto[101];
  fgets(texto, 101, stdin);
    
  int ret = verificar_ordenacao_tamanho(texto);
  printf("verificar_ordenacao_tamanho = %d\n", ret);
  return 0;
}
</pre>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
String texto
<p>
Saída:<br>
Retorno da função verificar_ordenacao_tamanho


<h4>04. Quantidade de matrizes</h4>
Escreva um programa que leia duas matrizes que contém números inteiros: matriz 1 e matriz 2. Depois de ler os dados das duas matrizes, o programa devo imprimir a quantidade de vezes que matriz 2 aparece dentro da matriz 1.
<p><br>
Entrada do programa:<br>
[Número de linhas da matriz 1] [Número de colunas da matriz 1]<br>
Valores da matriz 1, linha por linha<br>
[Número de linhas da matriz 2] [Número de colunas da matriz 2]<br>
Valores da matriz 2, linha por linha
<p>
Saída:<br>
Quantidade de vezes que matriz 2 aparece dentro da matriz 1

<h4>05. Remover palavra</h4>
Implemente uma função que receba uma string (vetor de caracteres) contendo uma frase e remova a palavra de índice i do vetor passado no parâmetro frase da função. Considere que a primeira palavra tem índice 1. Ao remover uma palavra, é necessário remover caracteres espaço adjacentes à palavra removida. A string de entrada possui no máximo 100 caracteres e pode conter pontuação.
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h, stdlib.h e string.h).
<p><br>
Protótipo da função:<br>
void remover_palavra(int i, char frase[]);
<p><br>
Exemplo de teste 1:
<p>
Entrada:<br>
3<br>
Primeira frase de teste
<p>
Saída:<br>
Primeira frase teste
<p>
Exemplo de teste 2:
<p>
Entrada:<br>
2<br>
Neste exercicio, a funcao envolve uso de string.
<p>Saída:<br>
Neste, a funcao envolve uso de string.
