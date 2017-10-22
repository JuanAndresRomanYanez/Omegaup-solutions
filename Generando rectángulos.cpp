#include <stdio.h>
int n,j=1001;
int main(){
    scanf("%i", &n),printf("%i\n", n);
    for(int i=1;i<=n;++i,j+=2)printf("%i %i\n", i, j);
}
