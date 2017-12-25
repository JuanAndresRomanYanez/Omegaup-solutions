#include <stdio.h>
#include <algorithm>
int n;
long long a,b;
long long sim_frac(long long num, long long den){
    long long mcd=std::__gcd(num,den);
    num/=mcd;
    den/=mcd;
    printf("%lld %lld\n", num,den);
}
int main(){
    scanf("%i", &n);
    while(n--)scanf("%lld%lld", &a, &b),sim_frac(a,b);
}
