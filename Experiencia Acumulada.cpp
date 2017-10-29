#include <stdio.h>
int n,a,b,c,sum=0;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i%i%i", &a, &b, &c),sum+=(a/b*c);
    printf("%i", sum);
}
