#include <stdio.h>
int n,x;
int main(){
    scanf("%i", &n);
    long long v[n];
    for(int i=0;i<n;++i)scanf("%lld", &v[i]);
    for(int i=0;i<n;++i)scanf("%i", &x),printf("%lld\n", v[x]);
}
