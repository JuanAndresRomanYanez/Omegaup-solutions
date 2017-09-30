
#include <stdio.h>
long long n,m;
int main(){
    scanf("%lld%lld", &n, &m);
    printf("%lld", (n/m)+(n-((n/m)*m)));
}
