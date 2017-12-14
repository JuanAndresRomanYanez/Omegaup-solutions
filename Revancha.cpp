#include <stdio.h>
int n,x,prom=0,ma=-1000001,mi=1000001;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i){
        scanf("%i", &x);
        ma=ma<x?x:ma;
        mi=mi>x?x:mi;
        prom+=x;
    }
    printf("%i %i %i", mi, ma,prom/n);
}
