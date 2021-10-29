<h2>1. Introdução ao C</h2>

<h3>Material do curso:</h3>
https://github.com/mitoedson/Programa-o-Estruturada-UFABC/blob/01.-Introdu%C3%A7%C3%A3o-ao-C/pe01_introducao_c.pdf

<h3>Lista de exercícios: </h3>
<p>
<h4>01. Potências de 2</h4>
Leia uma sequência de n inteiros e mostre quantos são potências de 2.
<p>
Observação: não utilize math.h.
<p>
Entrada (o primeiro número lido é o comprimento do vetor, que no caso é 5):<br>
5<br>
2<br>
8<br>
9<br>
10<br>
16
<p>
Saída:<br>
3
<p>  
<h4>02. Dígitos ímpares</h4>
Escreva um programa que leia um número inteiro (int) e imprima a quantidade de dígitos ímpares.
<p>
Por exemplo, no número 786254968 há 3 dígitos ímpares (7, 5, 9). Portanto, para o número 786254968, o programa deverá imprimir o valor 3  
<p>  
<h4>03. Percentual de múltiplos de 10</h4>
Escreva um programa que fique lendo uma sequência de números inteiros com uma quantidade indeterminada de números. O programa deve ler números até que seja lido um número negativo. Quando a leitura for finalizada, o programa deve imprimir o percentual de números lidos que são múltiplos de 10 (o número negativo deve ser desconsiderado para realizar o cálculo do percentual). O percentual deve ser impresso utilizando duas casas decimais após a vírgula.
<p>
Por exemplo, para a sequência 10 100 8 55 10 -99, o programa deve imprimir o valor 0.60 (são 3 múltiplos de 10 de um total de 5 números na sequência).
<p>
Importante: não é permitido o uso de vetor e stdlib.h para resolver este exercício.  
<p>  
<h4>04. Valor da função</h4>
Escreva um programa que leia os valores inteiros de n e m, e então imprima o valor da função definida a seguir:  <br>
![image](https://user-images.githubusercontent.com/89589245/133447632-1f84a1d4-ba59-46bd-ae6e-6d39d2fab7c5.png)

<p>  
<h4>05. Verificar ordenação</h4>
Escreva um programa que fique lendo uma sequência de números inteiros com uma quantidade indeterminada de números. O programa deve ler números até que seja lido um número negativo. Quando a leitura for finalizada, o programa deve imprimir se a sequência de números lidos está ordenada em ordem crescente, descrescente ou não ordenada (considere que o valor negativo não faz parte da sequência para verificar a ordenação). A sequência de números pode conter números repetidos, mas haverá pelo menos dois números diferentes na sequência.
<p>
Por exemplo:
<p>
- para a sequência 10 20 30 40 50 -99, o programa deve imprimir "CRESCENTE"<br>
- para a sequência 50 40 30 20 10 -99, o programa deve imprimir "DECRESCENTE".<br>
- para a sequência 30 20 50 10 20 -99, o programa deve imprimir "NAO ORDENADA".
<p>
Importante: não é permitido o uso de vetor e stdlib.h para resolver este exercício.  
<p>  
<h4>06. Expressão</h4>
Escreva um programa que leia uma expressão aritmética com as operações +, -, /, * e terminadas com =. O programa deve imprimir o resultado na tela da expressão na tela.
<p>
Não haverá espaços em branco entre os operandos e os operadores e também não haverá parênteses na equação. Lembre-se de seguir as regras de precedência (multiplicação e divisão devem ser realizadas antes de soma e subtração). Todos os operandos serão valores positivos, portanto, 8+-7 não é uma expressão válida. O resultado da expressão deve ser um número inteiro, ou seja, todas as operações são efetuadas com números inteiros.
<p>
Exemplos
<p>
TESTE 1<br>
Entrada:<br>
1+2*3=
<p>
Saída:<br>
7
<p>
TESTE 2<br>
Entrada:<br>
300-20*10=
<p>
Saída:<br>
100
<p>
TESTE 3<br>
Entrada:<br>
3*3+2+3*9+7=
<p>
Saída:<br>
45
<p>
Exercício de: Prof. Thiago F. Covões - Programação Estruturada - 2019 (o enunciado foi revisado e foram incluídos mais casos de teste nesta versão em 2021 - Prof. Paulo)
