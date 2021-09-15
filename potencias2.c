/*
Leia uma sequência de n inteiros e mostre quantos são potências de 2.

Observação: não utilize math.h.

Entrada (o primeiro número lido é o comprimento do vetor, que no caso é 5):
5
2
8
9
10
16

Saída:
3
*/

#include <stdio.h>

int main() {

    int n,x,i,pot,contador;

    scanf("%d",&n);
    
    i = 1;
    contador = 0;

    while(i <= n)
    {
        scanf("%d",&x);
        
        pot = 1;
        do
        {
            if(x == pot)
            {
                contador++;
                break;
            }
            pot *= 2;    

        }while(pot <= x);
        i++;
    }

    printf("%d",contador);

    return 0;
}
    



