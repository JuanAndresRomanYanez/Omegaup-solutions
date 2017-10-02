#include <stdio.h>
long long n,m,cont=0;
int main(){
    scanf("%lld%lld", &n, &m);
    for(long long i=n;i<=m;++i)if(i%2==0)cont++;
    printf("%lld", cont);
}
