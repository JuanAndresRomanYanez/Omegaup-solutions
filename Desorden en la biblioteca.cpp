#include <stdio.h>
int n,m;
int main(){
    scanf("%i%i", &n, &m);
    int v[n*m],g[n*m];
    for(int i=0;i<n*m;++i)scanf("%i", &v[i]);
    for(int i=0;i<n*m;++i)scanf("%i", &g[i]);
    for(int i=0;i<n*m;++i)if(v[i]!=g[i])printf("%i\n", g[i]);
}
