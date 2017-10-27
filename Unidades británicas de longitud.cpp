#include <stdio.h>
long long n,m=0,f=0,y=0,p=0,q=0;
int main(){
    scanf("%lld", &n);
    m=n/63360,n-=(m*63360);
    f=n/7920,n-=(f*7920);
    y=n/36,n-=(y*36);
    p=n/12,n-=(p*12);
    q=n;
    printf("%lld %lld %lld %lld %lld", m,f,y,p,q);
}
