#include <stdio.h>
int n;
int main(){
    scanf("%i", &n),printf("%i\n", n);
    while(n!=1)n=n%2==0?n/2:n*3+1,printf("%i\n", n);
}
