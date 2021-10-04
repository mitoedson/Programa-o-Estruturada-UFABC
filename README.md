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
<p>
A	B
123	21
61	42
30	84
15	168
7	336
3	672
1	1344
<p>  
Exemplo 2: multiplicação 150 x 4 = 600 (8+16+64+512)
<p>
A	B
150	4
75	8
37	16
18	32
9	64
4	128
2	256
1	512
<p>
A função deve ter o seguinte protótipo:
<p>
int multiplicacao_russa(int a, int b);
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main e não use printf/puts nas funções submetidas.
<p>
Exercício adaptado de: Prof. Thiago F. Covões - Programação Estruturada - 2019
  
  
