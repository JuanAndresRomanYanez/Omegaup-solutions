#include <stdio.h>
long long n,k;
int main(){
    scanf("%lld%lld", &n, &k),printf("%lld", n*(n-1)/2*k);
}
