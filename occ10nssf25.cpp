#include <stdio.h>
#include <math.h>
long long n,cont;
int main(){
    while(scanf("%lld", &n)!=EOF){
        cont=0;
        for(int i=0;i<n;++i)cont+=(pow(4,i));
        printf("%lld\n", cont);
    }
}
