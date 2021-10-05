<h1>04. Recursão</h1>
<h3>Listas produzidas</h3>:

<h4>01. Conta frequência:</h4>
Desenvolva uma função recursiva contafreq que recebe dois números naturais e indique a frequência com que o segundo número aparece no primeiro. O segundo número sempre será menor do que 10.
<p>
Por exemplo, contafreq(12343, 3) = 2.
<p>
A sua função deverá ter o seguinte protótipo:
<p>
int contafreq(int num, int digito);<br>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main e não use printf/puts nas funções submetidas.
<p>
Exercício adaptado de: Prof. Thiago F. Covões - Programação Estruturada - 2019

<h4>02. Superfatorial:</h4>  
<p> 
Considere o superfatorial de um número N como o produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 é:
<p>
superfatorial(4) = 1! * 2! * 3! * 4! = 288
<p>
Faça uma função recursiva que receba um número inteiro positivo N e retorne o superfatorial desse número.
<p>
A função deve ter o seguinte protótipo:
<p>
long superfatorial(int n);
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main e não use printf/puts nas funções submetidas.
<p>
Exercício adaptado de: Prof. Thiago F. Covões - Programação Estruturada - 2019

<h4>03. Dec2Bin:</h4>    
Desenvolva uma função recursiva para converter um número natural em base decimal para base binária. O número retornado pela função deve ser um número inteiro em que os dígitos 0 e 1 são usados para representar o número binário. Por exemplo, para o número 14, a função deve retornar 1110. Para o número 7, a função deve retornar 111.
<p>
A função deve ter o seguinte protótipo:
<p>
int dec2bin(int n_decimal);<br>
Importante: submeta apenas a função dec2bin. Não use variáveis globais. Não inclua o main e não use printf/puts nas funções submetidas.
<p>
Exercício adaptado de: Prof. Thiago F. Covões - Programação Estruturada - 2019
  
<h4>04. Multiplicação russa:</h4>      
Implemente uma função recursiva chamada multiplicacao_russa que recebe dois números inteiros e retorne a sua multiplicação. Utilize o método de multiplicação à Russa ou multiplicação Etíope. Uma descrição informal do método é:
<p>
Escreva os números A e B, que se deseja multiplicar na parte superior das colunas.
Dividir A por 2, sucessivamente, ignorando o resto até chegar à unidade, escrever os resultados da coluna A.
Multiplicar B por 2 tantas vezes quantas se haja dividido A por 2, escrever os resultados sucessivos na coluna B.
Somar todos os números da coluna B que estejam ao lado de um número ímpar da coluna A.
<p>
Exemplo 1: multiplicação 123 x 21 = 2583 (21+42+168+336+672+1344)
<pre>
A	B
123	21
61	42
30	84
15	168
7	336
3	672
1	1344
</pre>
<p>  
Exemplo 2: multiplicação 150 x 4 = 600 (8+16+64+512)
<pre>
A	B
150	4
75	8
37	16
18	32
9	64
4	128
2	256
1	512
</pre>
A função deve ter o seguinte protótipo:
<p>
int multiplicacao_russa(int a, int b);
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main e não use printf/puts nas funções submetidas.
<p>
Exercício adaptado de: Prof. Thiago F. Covões - Programação Estruturada - 2019
  
  
<h4>05. Determinante:</h4>
Programa para calcular o Determinante de uma Matriz de ordem n<br>
Exercício adaptado de Prof. Fernando Teubl - Programação Estruturada 2020
<p>
Determinante é uma função que transforma uma matriz quadrada em um número real.
<p>
O determinante de uma matriz de ordem 1 (apenas um elemento) é o único elemento da matriz.
Para matrizes maiores, pode-se calcular o determinante com a seguinte fórmula:
<p>
det(A)=∑j=1nai,j×(−1)i+jdet(Ai,j)
<p>
onde n é a ordem da matriz, ai,j é o elemento da posição i, j da matriz de entrada A, e Ai,j é a matriz que se obtém eliminando a linha i e a coluna j da matriz A, e i é uma constante, considere que sempre a primeira linha será removida neste exercício.
<p>
Nota-se que este algoritmo pode ser implementado de modo recursivo, quebrando a matriz original em matrizes menores até chegar à ordem 1, caso trivial, em que o determinante é o próprio elemento da matriz.
<p>
Implemente:<br>
void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c)
<p>
  Esta função deve preenher a matriz m_saida com todos os elementos de m_entrada, mas removendo a primeira linha e a coluna c:
A matriz m_entrada não deve ser alterada; Apenas a matriz m_saida é preenchida.
<p>
  Não é preciso alocar nenhuma matriz nesta função, as matrizes m_entrada e m_saida devem ser pré-alocadas por quem chamar esta função.
<p>
  A ordem da matriz de entrada é representada pelo parâmetro n da função.<br>
Considere que o parâmetrro c inicia no valor 0 (0 é a primeira coluna).<br>
É desnecessário retornar a ordem da matriz de retorno, pois sempre será n-1.
<p>
float calcula_determinante(int n, float m_entrada[n][n])
  <p>
Retorna o valor do determinante da matriz m_entrada com ordem n.<br>
Essa função deve ser recursiva:<br>
Se a ordem for igual a um, o retorno será o único elemento da matriz (m_entrada[0][0]).<br>
Se a ordem for maior que um, utilize o cálculo apresentado na fórmula do enunciado; Utilize a função remove_primeira_linha_e_coluna_c para gerar as sub-matrizes.
<p>
int main()<br>
Função principal que lê a ordem (n) da matriz, os elementos (linha à linha) e imprime o resultado do determinante da matriz lida com duas cassa decimais (inclua uma quebra de linha após a impressão do resultado).

<p>
Entrada do programa:<br>
n: int;<br>
elementos da matriz: sequência de float.
<p>
    Saída do programa:<br>
valor do determinante (com duas casas decimais e uma quebra de linha ao final)
<p>
Observações:<br>
A função calcula_determinante precisa ser recursiva;<br>
Você deve utilizar a função auxiliar remove_primeira_linha_e_coluna_c na função calcula_determinante.<br>
Não é permitido utilizar nenhum header adicional (apenas stdio.h e determinante.h são permitidos).
<p>
Exemplo 1
Entrada<br>
2<br>
0 2<br>
1 -1
<p>
Saída<br>
-2.00
<p>
Exemplo 2
<p>
Entrada<br>
4<br>
1 0 3 -3<br>
2 -3 -2 3<br>
-1 2 1 2<br>
3 2 5 0
<p>
Saída<br>
-80.00
<p>
  Exemplo 3
  <p>
Entrada<br>
6<br>
0 1 4 3 -1 0<br>
2 2 0 0 2 -1<br>
-1 0 3 2 0 0<br>
2 0 0 1 0 0<br>
5 2 5 -3 3 0<br>
0 -1 5 5 5 -1
<p>
    Saída<br>
25.00
