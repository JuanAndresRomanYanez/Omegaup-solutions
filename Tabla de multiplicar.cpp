#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    for(int i=1;i<11;++i)printf("%i x %i = %i\n", i, n, i*n);
}
