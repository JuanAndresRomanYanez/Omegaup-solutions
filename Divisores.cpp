#include <stdio.h>
int a,cont=2;
int main(){
    scanf("%i", &a);
    for(int i=2;i<=a/2;++i)if(a%i==0)cont++;
    printf("%i", cont);
}
