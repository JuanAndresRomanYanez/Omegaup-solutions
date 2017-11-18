#include <stdio.h>
int n,m,x;
int solve(int n, int m){
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    while(n--)scanf("%i", &x),printf("%i\n", v[x-1]);
}
int main(){
    scanf("%i%i", &n, &m),solve(n,m);
}
