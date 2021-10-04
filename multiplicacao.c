#include <stdio.h>

int multiplicacao_russa(int a, int b) {

    int produto = 0;
   
    if(a != 0)
    {
        if(a%2 != 0)
        {
            produto += b;
        }
        return produto + multiplicacao_russa(a/2,b*2);
    }
    else
        return 0;
}


int main() {
    int n1,n2;

    scanf("%d",&n1);
    scanf("%d",&n2);

    printf("%d",multiplicacao_russa(n1,n2));
}
