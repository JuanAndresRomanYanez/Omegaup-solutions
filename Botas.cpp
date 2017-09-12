#include <stdio.h>
int n,x;
int v[1000001];
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),v[x]++;
    x=0;
    for(int i=0;i<=1000000;++i)if(v[i]>0 && (v[i]%2)==1)x++;
    printf("%i", x);
}
