#include <stdio.h>
bool nar[1002];
int n,x,cont=0;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),nar[x]=true;
    scanf("%i", &n);
    while(n--)scanf("%i", &x),nar[x]=false;
    for(int i=0;i<1002;++i)if(nar[i])cont++;
    printf("%i", cont);
}
