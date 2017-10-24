#include <stdio.h>
long long n;
int test;
int main(){
    scanf("%i", &test);
    while(test--)scanf("%lld", &n),printf("%lld\n", (n&1?(n+1)/2*-1:(n+1)/2));
}
