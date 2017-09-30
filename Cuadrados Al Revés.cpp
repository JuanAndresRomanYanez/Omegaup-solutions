#include <stdio.h>
int n;
long long x;
long long v[1000];
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i)scanf("%lld", &x),v[i]=x*x;
    for(int i=n-1;i>=0;--i)printf("%lld\n", v[i]);
}
