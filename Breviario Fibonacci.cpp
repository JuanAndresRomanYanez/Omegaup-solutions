#include <stdio.h>
long long v[47];
int n,m,k;
int main(){
    v[0]=0,v[1]=1;
    for(int i=2;i<47;++i)v[i]=v[i-1]+v[i-2];
    scanf("%i%i%i", &n, &m, &k);
    printf("%lld\n%lld\n%lld", v[n], v[m], v[k]);
}
