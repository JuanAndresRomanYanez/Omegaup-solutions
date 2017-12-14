#include <stdio.h>
long long r,s,t,ans=0,res=0;
int main(){
    scanf("%lld%lld%lld", &r, &s, &t);
    if(t>r*s)ans=r*s,res=t-ans;
    else ans=t;
    printf("%lld %lld\n", ans, res);
}
