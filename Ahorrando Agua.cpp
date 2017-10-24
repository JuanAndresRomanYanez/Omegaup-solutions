#include <stdio.h>
#include <algorithm>
long long x,ma,sum=0;
int n;
int main(){
    scanf("%i", &n);
    long long v[n];
    for(int i=0;i<n;++i)scanf("%lld", &v[i]);
    std::sort(v,v+n);
    ma=v[n-1];
    for(int i=n-1;i>=0;--i)sum+=(ma-v[i]);
    printf("%lld", sum);
}

