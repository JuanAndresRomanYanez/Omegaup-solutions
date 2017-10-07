#include <stdio.h>
int n;
long long x,sum=0;
int main(){
    scanf("%lld", &n);
    for(int i=0;i<n;++i)scanf("%lld", &x),sum=i&1?sum-x:sum+x;
    printf("%lld", sum);
}
