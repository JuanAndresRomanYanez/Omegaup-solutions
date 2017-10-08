#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    for(int i=1;i<=n;++i)printf("%i %i %i ", i-1,i+1,i+2);
}
