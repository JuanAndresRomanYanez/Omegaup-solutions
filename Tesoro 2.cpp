#include <stdio.h>
int n,x,y;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i%i", &x, &y),printf("%i\n", x*2+y);
}
