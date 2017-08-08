#include <stdio.h>
long long fact(long long n){
    if(n==1)return 1;
    return n*fact(n-1);
}
int main(){
    long long a;
    scanf("%lld", &a);
    printf("%lld\n", fact(a));
}
