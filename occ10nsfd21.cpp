#include <stdio.h>
int i=1,n;
int main(){
    scanf("%i", &n);
    for(;n!=1;++i)n=n&1?3*n+1:n/2;
    printf("%i", i);
}
