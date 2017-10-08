#include <stdio.h>
long long n,k;
int main(){
    scanf("%lld%lld", &n, &k);
    long long v[n];
    for(int i=0;i<n;++i)scanf("%lld", &v[i]);
    for(int i=n-k;i<n;++i)printf("%lld\n", v[i]);
    for(int i=n-k-1;i>=0;--i)printf("%lld\n", v[i]);
}
