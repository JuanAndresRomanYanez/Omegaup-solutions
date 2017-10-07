#include <stdio.h>
long long v[1000001];
int n,q,x,y;
int main(){
    scanf("%i%i", &n, &q);
    for(int i=0;i<q;++i)scanf("%i%i", &x, &y),v[x]=y;
    for(int i=0;i<n;++i)printf("%lld ", v[i]);
}
