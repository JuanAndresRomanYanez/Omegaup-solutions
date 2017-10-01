#include <stdio.h>
int n;
long long f(long long n){
    if(n<=5)return 1;
    return f(n-2)*5;
}
int main(){
    scanf("%i", &n);
    printf("%lld", f(n));
}
