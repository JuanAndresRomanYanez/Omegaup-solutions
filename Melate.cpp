#include <stdio.h>
int n;
long long sum=1;
int main(){
    scanf("%i", &n);
    for(int i=2;i<=n;++i)sum*=i;
    printf("%lld", sum);
}
