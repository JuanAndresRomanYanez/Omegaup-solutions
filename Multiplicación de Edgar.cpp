#include <stdio.h>
long long a,b;
long long solve(long long a,long long b){
    long long aux,sum=0;
    while(b>0){
        aux=a;
        while(aux>0)sum+=((b%10)*(aux%10)),aux/=10;
        b/=10;
    }
    printf("%lld", sum);
}
int main(){
    scanf("%lld%lld", &a, &b),solve(a,b);
}
