<h1>03. String, Matrizes</h1>
<h3>Listas produzidas</h3>:

<h4>1. Conta palavras:</h4>
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
  
