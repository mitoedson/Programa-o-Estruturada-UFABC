<h2>08. Ordenação simples, busca</h2>

<h3>Lista de exercícios: </h3>

<h4>01. Selection sort:</h4>
Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos usando o algoritmo Selection Sort (ordem crescente).
<p>
Entrada:
<p>
O programa recebe um inteiro N (quantidade de elementos no vetor) e depois, na segunda linha, recebe N números inteiros (elementos do vetor).
<p>
Saída:
A primeira linha, trata-se do vetor na sua ordem original, com os valores separados por espaço em branco.

<p>  
Ao final de cada iteração do loop mais externo do selection sort (N-1 iterações), o programa deve imprimir todo o vetor, com seus valores separados por espaço em branco.
<p>  
Após finalizar a ordenação, imprima o vetor ordenado com seus valores separados por espaço em branco.
<p>  
A última linha trata-se de um inteiro representando o número de vezes que foi necessário realizar uma troca entre elementos diferentes do vetor.
<p>  
Importante: para impressão do vetor, antes do primeiro elemento não há nada impresso, assim como não há nada impresso depois do último elemento do vetor (não há um caractere espaço ao final da linha, existe apenas uma quebra de linha).
<p>  
Exercício adaptado do material do Prof. Jesús P. Mena-Chalco (Algoritmos e Estruturas de Dados I - 2019)

<h4>02. Insertion sort:</h4>
Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos usando o algoritmo Insertion Sort (ordem crescente).
<p>
Entrada:
<p>
O programa recebe um inteiro N (quantidade de elementos no vetor) e depois, na segunda linha, recebe N números inteiros (elementos do vetor).
<p>
Saída:
<p>
A primeira linha, trata-se do vetor na sua ordem original, com os valores separados por espaço em branco.
<p>
Ao final de cada iteração do loop mais externo do selection sort (N-1 iterações), o programa deve imprimir todo o vetor depois da inserção, com seus valores separados por espaço em branco.
<p>
Após finalizar a ordenação, imprima o vetor ordenado com seus valores separados por espaço em branco.
<p>
A última linha trata-se de um inteiro representando o número de comparações entre elementos do vetor que foi necessário realizar.
<p>
Importante: para impressão do vetor, antes do primeiro elemento não há nada impresso, assim como não há nada impresso depois do último elemento do vetor (não há um caractere espaço ao final da linha, existe apenas uma quebra de linha).
<p>
Exercício adaptado do material do Prof. Jesús P. Mena-Chalco (Algoritmos e Estruturas de Dados I - 2019)

<h4>03. Busca binária:</h4>
  Escreva um programa que receba um número inteiro x, um número inteiro n e depois um vetor com n inteiros. Os valores no vetor de n inteiros já estão ordenados em ordem crescente. Depois o programa deve buscar o número x no vetor lido utilizando busca binária. O programa imprimirá o índice do valor no vetor e também o número de comparações entre x e um elemento do vetor realizadas durante a busca binária.
<p>
Entrada:
<p>
Número inteiro x<br>
Número inteiro n<br>
n números inteiros (elementos do vetor)
<p>
  Saída:
<p>
Na primeira linha, deve ser impresso o índice em que o elemento x está no vetor lido (não há números repetidos no vetor). Caso o elemento x não seja encontrado, imprima -1.
<p>
  Na segunda linha, deve ser impressa a quantidade de comparações entre x e um elemento do vetor realizadas durante a busca. Utilize o algoritmo de busca binária apresentado em aula para realizar a busca. Após imprimir o valor, quebre a linha ('\n').
<p>
  Importante: o programa deve imprimir apenas os dois valores. Não deve haver nenhum outro caractere, inclusive caractere espaço após a impressão dos valores. Após cada valor impresso, haverá apenas uma quebra de linha ('\n'). Não use variáveis globais.

<h4>04. Ordenação pela soma e quantidade de dígitos:</h4>
Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos (ordem crescente) considerando a soma dos dígitos em cada número. Por exemplo, o vetor [22 111 99 1234] após a ordenação será [111 22 1234 99]. Em caso de empate na soma dos dígitos, o número com menor quantidade de digítos deve vir antes. Por exemplo, o vetor [1111 123 60 22] após a ordenação será [22 1111 60 123].
<p>
Caso ocorra empate também neste critério, a ordenação relativa original entre os elementos deve ser mantida. Por exemplo, o vetor [321 60 123] após a ordenação será [60 321 123]. Neste exemplo, ocorreu empate na soma dos dígitos e no quantidade de dígitos entre os números 321 e 123. Neste caso, foi mantida ordenação relativa entre os dois (321 vinha antes de 123 no vetor original). Caso o vetor de entreda seja [123 60 321], após a ordenação será [60 123 321].
<p>
Um algoritmo de ordenação é estável se a ordem relativa de elementos com chaves iguais é mantida após a ordenação. Para este exercício, um algoritmo estável permitirá que números em que ocorrer empate nos dois critérios (soma e quantidade de dígitos) mantenham sua posição relativa após a ordenação. Considerando os algoritmos de ordenação apresentados em aula, qual deles são estáveis e quais não são?
<p>
Entrada:
<p>
Número inteiro n<br>
n números inteiros (elementos do vetor)
<p>
Saída:
<p>
Vetor ordenado pela soma e quantidade de dígitos, conforme descrito no enunciado (coloque um espaço entre cada número impresso). Quebre a linha ao final da impressão do vetor ordenado.
<p>
Importante: o código não pode possuir o termo "sort". Também não é permitido o uso da função qsort. Não use variáveis globais.
