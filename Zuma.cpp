#include <stdio.h>
int n,m,cont=2,aux;
int main(){
        scanf("%i%i", &n, &m);
        while(n>=m)aux=m,m=n-m,n=aux,cont++;
        printf("%i", cont);
}
