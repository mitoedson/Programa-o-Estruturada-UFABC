#include <stdio.h>
#include <stdlib.h>

void valor_funcao(int m, int n, int *resultado) {
   
    int acumula = 0;
    int j,k;
    *resultado = 0;

    for(j = 1; j <= m; j++)
    {
        acumula = 0;
        for(k = 1; k <= n; k++)
            acumula += (j + k)*(j + k);

        *resultado += (j + 1)*(j + 1) + (10 * acumula);
    }
}

int main(){

int a=0,b=0;
int *r;

r = malloc(sizeof(int));

scanf("%d",&a);
scanf("%d",&b);

valor_funcao(a,b,r);

printf("%d",*r);

free(r);

}
