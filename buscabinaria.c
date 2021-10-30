#include <stdio.h>

int busca_binaria(int *v, int n, int x) {
    int esq = 0, dir = n-1, contador = 0;

    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (v[meio] == x){
            contador++;
            printf("%d\n",meio);
            return contador;
        }
        else if (v[meio] < x){
            esq = meio + 1;
            contador+=2;
        }
        else{
            dir = meio - 1;
            contador+=2;
        }
    }
    printf("-1\n");
    return contador;
}

int main(){
    int x,N,i;
    scanf("%d", &x);
    scanf("%d", &N);
    int elementos[N];
    for(i = 0; i < N; i++)
        scanf("%d", &elementos[i]);

    printf("%d\n",busca_binaria(elementos,N,x)); 
}
