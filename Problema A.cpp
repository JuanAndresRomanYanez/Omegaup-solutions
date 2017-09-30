#include <stdio.h>
#include <algorithm>
long long n,cont=0,conti=0;
int main(){
    scanf("%lld", &n);
    long long v[n];
    for(int i=0;i<n;++i)scanf("%lld", &v[i]);
    std::sort(v,v+n);
    if(n>1)cont=v[0]*v[1];
    if(n>2)conti=v[n-1]*v[n-2];
    printf("%lld", cont>conti?cont:conti);
}
