#include <stdio.h>
long long n,m;
long long solve(long long n,long long m){
    long long cont=0,aux;
    while(n>0){
        aux=n;
        n=n>m?n:m;
        m=m<aux?m:aux;
        cont+=(n/m);
        n=n-((n/m)*m);
    }
    printf("%lld\n", cont);
}
int main(){
    scanf("%lld%lld", &n, &m),solve(n,m);
}

