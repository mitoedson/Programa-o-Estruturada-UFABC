#include <stdio.h>

long superfatorial(int n) {

    int i,produto = 1;

    if(n != 1)
    {
        for(i = n; i > 1; i--)
        {
            produto *= i;
        }
        return produto * superfatorial(n-1);
    }
    else
        return produto;
}


int main() {
    long numero;

    scanf("%ld",&numero);

    printf("%ld",superfatorial(numero));
}
