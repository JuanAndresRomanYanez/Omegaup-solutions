#include <stdio.h>
long long a,b,c;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c);
    if(a==3)printf("%lld", b*c/2);
    else if(a==4)printf("%lld", b*c);
    else printf("%lld", a*b*c/2);
}
