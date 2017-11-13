#include <stdio.h>
long long n,sum=0;
int main(){
    while(scanf("%lld", &n) && n>=0)if(n>=10 && n<=100)sum+=n;
    printf("%lld", sum);
}
