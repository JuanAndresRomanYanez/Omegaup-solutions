#include <stdio.h>
long long a,b;
int main(){
    scanf("%lld%lld", &a, &b),printf("%lld", a/b);
    if(a%b!=0)printf(" %lld/%lld", a%b, b);
}
