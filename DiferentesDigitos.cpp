#include <stdio.h>
long long n,m,cont=0;
long long v[10];
long long solve(long long n,long m){
    long long aux;
    for(long long i=n;i<=m;++i){
        aux=i;
        for(int k=0;k<=9;++k)v[k]=0;
        while(aux!=0){
            v[aux%10]++;
            aux/=10;
        }
        for(int k=0;k<=9;++k)if(v[k]>1)goto kok;
        cont++;
        kok:;
    }
    return cont;
}
int main(){
    scanf("%lld%lld", &n, &m),printf("%lld", solve(n,m));
}
