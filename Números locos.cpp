#include <stdio.h>
int n,x,cont=0;
int main(){
    scanf("%i%i", &n, &x);
    int v[x+1];
    for(int i=0;i<x;++i)scanf("%i", &v[i]);
    v[x]=v[0];
    for(int i=0;i<x;++i)if((v[i]+v[i+1])%n==0)cont++;
    printf("%i", cont);
}
