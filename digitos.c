/*
Escreva um programa que leia um número inteiro (int) e imprima a quantidade de dígitos ímpares.

Por exemplo, no número 786254968 há 3 dígitos ímpares (7, 5, 9). Portanto, para o número 786254968, o programa deverá imprimir o valor 3
*/

#include <stdio.h>

int main()
{

    int n,contador,pot;

    scanf("%d",&n);

    contador=0;
    pot=1;
    while(n != 0)
    {
        if((n%(10*pot))%(2*pot) != 0)    
        {
            contador++;
        }
        n = n - (n%(10*pot));
        pot *= 10;
    }

    printf("%d",contador);

return 0;
}
