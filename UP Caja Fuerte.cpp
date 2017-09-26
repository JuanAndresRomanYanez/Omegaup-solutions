#include <stdio.h>
#include <math.h>
int v[5],g[5];
int cont=0,mi,ma,res;
int main(){
    for(int i=0;i<5;++i)scanf("%i", &v[i]);
    for(int i=0;i<5;++i)scanf("%i", &g[i]);
    for(int i=0;i<5;++i){
        ma=v[i]>g[i]?v[i]:g[i];
        mi=v[i]<g[i]?v[i]:g[i];
        res=fabs(v[i]-g[i]);
        mi=(10-ma)+mi;
        mi=mi<res?mi:res;
        cont+=mi;
    }
    printf("%i", cont);
}
