#include <stdio.h>
int n,cont=0;
long long x,y;
int main(){
    scanf("%i%lld", &n, &x);
    long long v[n];
    for(int i=0;i<n;++i)scanf("%lld", &v[i]);
    for(int i=n-1;i>=0;--i){
            if(x-v[i]>=0)x-=v[i],cont++;
            else break;
    }
    printf("%i", cont);
}
