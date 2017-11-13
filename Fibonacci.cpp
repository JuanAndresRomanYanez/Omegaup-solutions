#include <stdio.h>
long long v[91],n;
void calculate(){
    v[0]=v[1]=1;
    for(int i=2;i<91;++i)v[i]=v[i-1]+v[i-2];
}
int solve(int n){
    for(int i=0;i<n;++i)printf("%lld\n", v[i]);
}
int main(){
    calculate();
    scanf("%lld", &n),solve(n);
}
