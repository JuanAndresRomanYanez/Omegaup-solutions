#include <stdio.h>
long long n;
long long fact(long long n){
    if(n==1)return 1;
    return fact(n-1)*n;
}
int main(){
    scanf("%lld", &n),printf("%lld", fact(n));
}
