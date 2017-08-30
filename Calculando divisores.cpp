#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    printf("%i\n", n);
    for(int i=n/2;i>=1;--i)if(n%i==0)printf("%i\n", i);
}
