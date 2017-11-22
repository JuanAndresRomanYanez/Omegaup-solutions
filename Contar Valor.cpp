#include <stdio.h>
int v[1000001],k,n,x;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i)scanf("%i", &x),v[x]++;
    scanf("%i", &k),printf("%i", v[k]);
}
