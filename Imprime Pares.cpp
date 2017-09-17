#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    if(n==1)printf("Nada que imprimir");
    else for(int i=2;i<=n;++i)if(i%2==0)printf("%i ", i);
}
