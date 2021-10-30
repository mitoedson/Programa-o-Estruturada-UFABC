#include <stdio.h>

int compara_vetores(int a, int b){

    int i = 1, j = 0, potencia_a = 0, dividendo = 0, divisor = 10, quociente = 0, resto = 0, soma_a = 0;
    // potencia de 10
    do{
        if(a <= 9 && a>= -9){
            potencia_a = 0;
            break;
        }
        else{
            if((a / divisor) != 0){
                potencia_a++;
                divisor *= 10;
            }
        }
    }while((a / divisor) != 0);

    // soma dos digitos
    dividendo = a;
    divisor /= 10;
    for(j = potencia_a; j >= 0; j--){
        resto = (dividendo % divisor);
        soma_a += (int)(dividendo / divisor);
        dividendo = resto;
        divisor /= 10;
    }

    int potencia_b = 0, soma_b = 0;
    i = 1, j = 0, dividendo = 0, divisor = 10, quociente = 0, resto = 0;
    // potencia de 10
    do{
        if(b <= 9 && b>= -9){
            potencia_b = 0;
            break;
        }
        else{
            if((b / divisor) != 0){
                potencia_b++;
                divisor *= 10;
            }
        }
    }while((b / divisor) != 0);

    // soma dos digitos
    dividendo = b;
    divisor /= 10;
    for(j = potencia_b; j >= 0; j--){
        resto = (dividendo % divisor);
        soma_b += (int)(dividendo / divisor);
        dividendo = resto;
        divisor /= 10;
    }

    if(soma_a < soma_b)
        return 1;
    else if(soma_a == soma_b && potencia_a < potencia_b)
        return 0;
    else    
        return -1;
}

void ordenacao(int *v, int n) {

    int i = 0, j = 0, k = 0, troca_ordem = 0;

    for(k = 0; k < n; k++){
        printf("%d", v[k]);
        if(k != n - 1)
            printf(" ");
    }
    printf("\n");


    for(i = 1; i < n; i++){
        
        for(j = i - 1; j >= 0; j--){
            if(compara_vetores(v[j+1],v[j]) == 1 || compara_vetores(v[j+1],v[j]) == 0){
                troca_ordem = v[j+1];
                v[j+1] = v[j];
                v[j] = troca_ordem;
            }
            else
                break;
        }
    }
    for(k = 0; k < n; k++){
        printf("%d", v[k]);
        if(k != n - 1)
            printf(" ");
    }
    printf("\n");

}


int main(){
    int n,i;
    scanf("%d", &n);
    int v[n];
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);

    ordenacao(v,n); 
}
