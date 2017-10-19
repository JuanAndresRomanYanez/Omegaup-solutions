#include <stdio.h>
int n,a,b,aux=1001,res;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    scanf("%i%i", &a, &b);
    for(int i=a;i<=b;++i)if(v[i]<aux)aux=v[i],res=i;
    printf("%i", res);
}
