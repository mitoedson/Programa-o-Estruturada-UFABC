/*
Escreva um programa que leia os valores inteiros de n e m, e então imprima o valor da função definida a seguir:


Failed tests
Test 2: Teste 2 (-1.000)
Test 4: Teste 4 (-1.000)
Test 5: Teste 5 (-1.000)
Test 2: Teste 2
[Incorrect program output]
--- Input ---
1
5


--- Program output ---
185

--- Expected output (numbers)---
455


Test 4: Teste 4
[Incorrect program output]
--- Input ---
8
6


--- Program output ---
2008

--- Expected output (numbers)---
5608


Test 5: Teste 5
[Incorrect program output]
Erro

Summary of tests
+------------------------------+
|  5 tests run/ 2 tests passed |
+------------------------------+

*/

#include <stdio.h>

int main()
{

    int n,m,soma1,soma2,i,k;

    scanf("%d",&n);
    scanf("%d",&m);

    soma1 = 0;
    soma2 = 0;
    for(k = 1; k <= m; k++)
    {
        soma2 += (k + 1)*(k + 1);
    }

    for(i = 1; i <=n; i++)
    {
       soma1 += (m + 5 * (soma2));
    }
    
    printf("%d",soma1);

return 0;
}
