#include <stdio.h>

int contafreq(int num, int digito) {

    int soma = 0;
    
    if(num != 0)
    {
        if(num%10 == digito)
            soma++;
        return soma + contafreq((num/10),digito);
    }
    else
        return soma;
}

int main() {
    int n,numero;

    scanf("%d",&numero);
    scanf("%d",&n);

    printf("%d",contafreq(numero,n));
}
