#include <stdio.h>
#include <stdlib.h>

void ordena(int *a, int *b, int *c) {
    int temp;
    while(*a > *b || *b > *c)
    {
        temp = *a;
        if(*a >= *b)
        {
            *a = *b;
            *b = temp;
        }
        if(*b >= *c)
        {
            temp = *b;
            *b = *c;
            *c = temp;
        }
    }
}

int main(){

int *a,*b,*c;

a = malloc(sizeof(int));
b = malloc(sizeof(int));
c = malloc(sizeof(int));

scanf("%d",a);
scanf("%d",b);
scanf("%d",c);

ordena(a,b,c);

printf("%d",*a);
printf("%d",*b);
printf("%d",*c);

free(a);
free(b);
free(c);
}
