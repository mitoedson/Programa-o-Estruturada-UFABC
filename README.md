<h1>06. Ponteiros - parte 2</h1>
<h3>Listas produzidas</h3>:

<h4>01. Vetor com valores duplicados:</h4>
Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada e retorna outro vetor com todos os números ímpares duplicados. A função também retorna (por referência) a quantidade de elementos no vetor retornado (n_retorno).
<p>
Por exemplo, se o vetor v for [11, 22, 33, 55, 44], o vetor retornado deve ser [11, 11, 22, 33, 33, 55, 55, 44] e também o valor referenciado por n_retorno deve receber o valor 8 (comprimento do vetor retornado).
<p>
Observação: a função deve retornar um novo vetor e não alterar o vetor de entrada (v).
<p>
Protótipo da função:<br>
int *duplica_impares(int *v, int n_entrada, int *n_retorno);<br>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/scanf/fprintf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
n<br>
elementos do vetor
<p>
Saída:<br>
elementos do vetor de entrada<br>
elementos do vetor de retorno

  
<h4>02. Intercala vetores:</h4>  
Escreva um programa que leia dois vetores de inteiros. Assuma que os dois vetores estão ordenados em ordem crescente. Depois, o programa deve imprimir todos os números lidos em ordem crescente, intercalando os valores dos dois vetores. Por exemplo, se os vetores lidos forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], o programa deverá imprimir 1, 2, 5, 5, 7, 8, 12, 46, 90.
<p>
Entrada:<br>
n1 (quantidade de elementos no vetor 1)<br>
elementos do vetor 1<br>
n2 (quantidade de elementos no vetor 2)<br>
elementos do vetor 2
<p>
Saída:<br>
elementos dos vetores 1 e 2 interlacados em ordem crescente (inclua um caractere espaço entre cada elemento, também inclua uma quebra de linha ao final)
<p>
Importante: o programa não pode usar colchetes, portanto, será necessário utilizar aritmética de ponteiros para acessar os elementos dos vetores. Para alocar os vetores, use malloc.
  
  
