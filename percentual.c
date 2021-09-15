/*
Escreva um programa que fique lendo uma sequência de números inteiros com uma quantidade indeterminada de números. O programa deve ler números até que seja lido um número negativo. Quando a leitura for finalizada, o programa deve imprimir o percentual de números lidos que são múltiplos de 10 (o número negativo deve ser desconsiderado para realizar o cálculo do percentual). O percentual deve ser impresso utilizando duas casas decimais após a vírgula.

Por exemplo, para a sequência 10 100 8 55 10 -99, o programa deve imprimir o valor 0.60 (são 3 múltiplos de 10 de um total de 5 números na sequência).

Importante: não é permitido o uso de vetor e stdlib.h para resolver este exercício.
*/

#include <stdio.h>

int main()
{

    int n,total,m_total;
    
    n = 0;
    total = 0;
    m_total = 0;
    while(n >= 0)
    {
        scanf("%d",&n);
        if(n >= 0)
        {
            total++;
            if((n%10) == 0)
                m_total++;
        }
    }

    printf("%.2f",(double)m_total/total);

return 0;
}
