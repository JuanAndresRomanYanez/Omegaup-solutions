#include <stdio.h>
long long n,x=1;
long long f( long long n){
    if(n<=5)return 1;
    if(n>5)return f(n-2)*5;
}
int main(){
    scanf("%lld", &n);
    n=f(n);
    while(x<=n){
        printf("%lld\n", x);
        x*=5;
    }
}
