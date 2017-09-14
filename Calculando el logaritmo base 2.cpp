#include <stdio.h>
#include <math.h>
long long n;
int main(){
    scanf("%lld", &n);
    n=log2(n);
    printf("%lld", n);
}
