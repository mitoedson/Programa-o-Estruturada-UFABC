<h2>02. Introdução ao C</h2>

<h3>Lista de exercícios: </h3>

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

  
<h4>3. Números únicos</h4>  
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
  
<h4>4. Compactação de vetor</h4>

Implemente a função compactar_vetor, que recebe um vetor de inteiros v e um valor n que representa o tamanho do vetor v. A função deve realizar a compactação dos valores seguindo um conceito similar à compressão Runlength. A compactação deve substituir cada valor no vetor por dois números: um com o valor e outro com a quantidade de vezes que o valor aparece de forma consecutiva.
<p>
Observação: Nesse processo de compactação, considere apenas os valores positivos. As posições com valores -1 serão consideradas como posições livres no vetor.
<p>
Por exemplo, ao receber o vetor [10 10 10 10 10 50 50 90 -1 -1], o vetor compactado seria [10 5 50 2 90 1 -1 -1 -1 -1 ]. O número 10 aparece 5 vezes de forma consecutiva. Por isso, os primeiros números no vetor compactado são o 10 (valor) e o 5 (quantidade de vezes que o valor 10 aparece de forma consecutiva). Depois, o número 50 aparece duas vezes de forma consecutiva. Então o vetor compactado possui os números 50 (valor) e 2 (quantidade). No final, o número 90 aparece apenas uma vez e, por isso, os próximos números no vetor compactado são 90 (valor) e 1 (quantidade). O restante do vetor é preenchido com -1, pois esse valor é usado para indicar posições livres no vetor.
<p>
Protótipo da função:
<p>
void compactar_vetor(int v[], int n);
<p>
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
vetor após chamar a função compactar_vetor
  
<h4>5. Maior palíndromo</h4>
  
Um palíndromo é uma sequência de unidades que podem ser lido igualmente da esquerda para direita ou o inverso. Exemplos de palíndromos: ARARA, REVER, RADAR, 13531, 7283827, 1234554321.
<p>
Neste exercício, implemente as funções a seguir:
<p>
- void converte_numero_para_vetor_de_digitos(int n, int v[]): esta função deve converter um número inteiro para um vetor contendo em cada item os dígitos deste número, do mais significativo para o menos significativo. Após último dígito, inclua o valor -1 para indicar o fim da sequência. Assuma que o vetor possui espaço suficiente para todos os dígitos. Por exemplo, para o número n = 246, o vetor será preenchido da seguinte forma: [2, 4, 6, -1].<br>
- int eh_palindromo(int v[]): recebe um vetor e indica se é palíndromo (0: não, 1: sim). O vetor passado é resultado do uso do processo descrito no item anterior. Portanto, a função deverá procurar o final da sequência (valor -1) antes de realizar a verificação. A sequência [1, 2, 3, -1] não é palíndromo, mas a sequência [2, 6, 2, -1] é palíndromo.<br>
- int maior_palindromo(int m, int fatores[2]): a função deve procurar o maior inteiro palíndromo P resultado do produto P = A x B. Neste produto, A <= m e B <= m (m é parâmetro da função). Por exemplo, para m=25, o maior palíndromo é 575, sendo A=25 e B=23. Nesse caso, o retorno da função será 575 e os elementos no parâmetro fatores deverão ser preenchidos da seguinte forma: fatores[0]=25 e fatores[1]=23. Assuma que o vetor passado para a função possui duas posições (índices 0 e 1).
<p>
Importante: submeta apenas a função. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h e stdlib.h).
<p>
Formato da entrada no caso de teste (que aparece ao avaliar a atividade):<br>
[numero] [tipo] (o tipo é a função testada: C (converte_numero_para_vetor_de_digitos), P (eh_palindromo) e M (maior_palindromo).
<p>
Exercício original do Prof. Fernando Teubl (Programação Estruturada - 2020). O exercício apresentado aqui foi adaptado do original.
