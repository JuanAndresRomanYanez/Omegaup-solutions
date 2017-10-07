#include <stdio.h>
long long n;
long long fact(long long n){
    if(n==0 || n==1)return 1;
    return n*fact(n-1);
}
int main(){
    scanf("%lld", &n),printf("%lld", fact(n));
}
