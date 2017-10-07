#include <stdio.h>
long long v[161],n;
void todo(){
    for(int i=0;i<50;++i)v[i]=2;
    for(int i=50;i<161;++i)v[i]=v[i-1]+(v[i-5]*2);
}
int main(){
    todo();
    while(scanf("%lld", &n)!=EOF)printf("%lld\n", v[n]);
}
