#include <stdio.h>
int v[101],n,x,res=0;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),v[x]++;
    for(int i=1;i<101;++i)if(v[i]>res)res=v[i],x=i;
    printf("%i", x);
}
