#include <stdio.h>
int n,v[32768],x;
int main(){
    for(int i=1;i<32768;++i)v[i]=0;
    scanf("%i", &n);
    while(n--)scanf("%i", &x),v[x]++;
    scanf("%i", &x),printf("%i", v[x]);
}
