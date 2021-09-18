<h1>02. Introdução ao C</h1>
<h3>Listas produzidas</h3>:

<h4>1. Códigos de produtos:</h4>
Uma empresa registra o código de cada produto vendido ao longo do dia em uma lista. O gerente gostaria que, ao adicionar um código na lista, essa lista se mantenha ordenada (em ordem crescente). Dessa forma, ao final do dia, é mais fácil verificar quais produtos foram vendidos.
<p>
Faça um programa que fique lendo códigos de produtos (números inteiros):
<p>
- Cada número deverá ser inserido em um vetor de códigos de produtos mantendo a ordenação (ordem crescente). Assuma que haverá no máximo 100 códigos de produtos. No início, o vetor não possui nenhum código de produto armazenado.<br>
- Após cada inserção, imprima o vetor completo. O programa encerra quando o usuário digitar o número -1 (não imprima o vetor após o usuário digitar -1, apenas encerre o programa).
<p>
<b>Exemplo de funcionamento:</b>
<p>
Digite: 5<br>
5<br>
Digite: 8<br>
5 8<br>
Digite: 2<br>
2 5 8<br>
Digite: 7<br>
2 5 7 8<br>
Digite: -1
  
  
<h4>2. Sequência de números</h4>  
Implemente a função verificar_sequencia, que recebe um vetor de inteiros vetor1, um valor n1 que representa o tamanho do vetor1, um vetor de inteiros vetor2, e um valor n2 que representa o tamanho do vetor2. A função deve retornar a quantidade de vezes que a sequência de valores do vetor2 aparece no vetor1. Por exemplo, para vetor1=[11 22 33 88 11 22 33 11 22 33 11 22] e vetor2=[11 22 33], a função deve retornar 3, pois a sequência [11 22 33] aparece 3 vezes no vetor1.
<p>
Protótipo da função:
<p>
int verificar_sequencia(int vetor1[], int n1, int vetor2[], int n2);
<p>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h e stdlib.h).
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
quantidade de valores no vetor 1<br>
valores do vetor 1<br>
quantidade de valores no vetor 2<br>
valores do vetor 2
<p>
Saída:<br>
vetor 1<br>
vetor 2<br>
retorno da função verificar_sequencia  

  
<h4>Números únicos</h4>  
Implemente a função qtd_numeros_unicos, que recebe um vetor de inteiros v e um valor n que representa o tamanho do vetor v. A função deve retornar a quantidade de números únicos no vetor. Por exemplo, o vetor [11 11 11 22 22 11 33 44 44 44] tem 4 números únicos: 11, 22, 33 e 44. Portanto, o retorno da função seria o valor 4 neste caso. Assuma que o vetor pode possuir apenas números positivos na faixa [1; 1000].
<p>
Protótipo da função:
<p>
int qtd_numeros_unicos(int v[], int n);<br>
Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h e stdlib.h).
<p>
Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.
<p>
Entrada:<br>
quantidade de valores no vetor<br>
valores do vetor
<p>
Saída:<br>
vetor de entrada<br>
retorno da função qtd_numeros_unicos  
  
