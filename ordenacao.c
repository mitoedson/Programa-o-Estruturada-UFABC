/*
Escreva um programa que fique lendo uma sequência de números inteiros com uma quantidade indeterminada de números. O programa deve ler números até que seja lido um número negativo. Quando a leitura for finalizada, o programa deve imprimir se a sequência de números lidos está ordenada em ordem crescente, descrescente ou não ordenada (considere que o valor negativo não faz parte da sequência para verificar a ordenação). A sequência de números pode conter números repetidos, mas haverá pelo menos dois números diferentes na sequência.

Por exemplo:

para a sequência 10 20 30 40 50 -99, o programa deve imprimir "CRESCENTE"
para a sequência 50 40 30 20 10 -99, o programa deve imprimir "DECRESCENTE".
para a sequência 30 20 50 10 20 -99, o programa deve imprimir "NAO ORDENADA".
Importante: não é permitido o uso de vetor e stdlib.h para resolver este exercício.
*/

#include <stdio.h>

int main() {

    int n,anterior,decresce,cresce,contador;
    
    n = 0;
    anterior = 0;
    decresce = 0;
    cresce = 0;
    contador = 0;

    while(n >= 0)
    {
        scanf("%d",&n);
        
        if(n >= 0)
        {
            if(contador == 0)
            {
                anterior = n;
            }
            else
            {
                if(n > anterior)
                {
                    cresce++;
                }
                else if(n < anterior)
                {
                    decresce++;
                }
                anterior = n;
            }
        }
        contador++;
    }

    if(cresce != 0 && decresce == 0)
        printf("CRESCENTE");
    else if(cresce == 0 && decresce != 0)
        printf("DECRESCENTE");
    else
        printf("NAO ORDENADA");

    return 0;
}
    



