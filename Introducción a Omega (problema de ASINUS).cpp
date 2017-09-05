#include <stdio.h>
int n,m;
int main(){
    scanf("%i%i", &n, &m);
    printf("%i\n", n+m);
    printf((n+m)&1?"IMPAR":"PAR");
}
