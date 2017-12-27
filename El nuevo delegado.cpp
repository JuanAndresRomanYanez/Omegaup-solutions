#include <stdio.h>
int n;
int solve(int n){
    int m,x,y;
    long long ax,v[n];
    scanf("%lld", &v[0]);
    for(int i=1;i<n;++i)scanf("%lld", &ax),v[i]=v[i-1]+ax;
    scanf("%i", &m);
    while(m--)scanf("%i%i", &x, &y),printf("%lld\n", (x==1?v[y-1]%1000000007:(v[y-1]-v[x-2])%1000000007));
}
int main(){
    scanf("%i", &n),solve(n);
}
