#include <stdio.h>
int a,n,x,sum=0;
int main(){
    scanf("%i%i", &a, &n);
    while(n--)scanf("%i", &x),sum+=x;
    printf("%i", a+(sum*7));
}
