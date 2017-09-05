#include <stdio.h>
int n,m;
int main(){
    scanf("%i%i", &n, &m);
    for(int i=n;i<=m;++i)if(i%3==0)printf("%i\n", i);
}
