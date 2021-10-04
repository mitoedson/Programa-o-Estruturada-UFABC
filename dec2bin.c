#include <stdio.h>

int dec2bin(int n_decimal) {

    int binario = 0;

    if(n_decimal/2 != 0)
    {
        binario = (n_decimal%2); 
        return binario + dec2bin(n_decimal/2)*10;
    }
    else
        return 1;
}

int main() {
    int numero;

    scanf("%d",&numero);

    printf("%d",dec2bin(numero));
}
