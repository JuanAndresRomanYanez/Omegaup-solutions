#include <stdio.h>
int n,m,x;
int main(){
    scanf("%i%i", &n, &m);
    int v[m+1];
    for(int i=1;i<=m;++i)v[i]=0;
    while(n--)scanf("%i", &x),v[x]++;
    for(int i=1;i<=m;++i)printf("%i ", v[i]);
}
