#include <stdio.h>
int a,b,c,aux;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    if(a>b)aux=a,a=b,b=aux;
    if(b>c)aux=b,b=c,c=aux;
    if(a>b)aux=a,a=b,b=aux;
    printf("%i %i %i", a, b, c);
}
