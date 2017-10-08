#include <stdio.h>
long long a,b,c;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c),printf("%lld\n", ((a-(a/4))*5)+((b-(b/4))*10)+((c-(c/4))*8));
}
