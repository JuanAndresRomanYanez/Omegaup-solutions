#include <stdio.h>
long long n,sum,can=0;
int main(){
    while(scanf("%lld", &n )!=EOF)sum+=n,can++;
    printf("%lld", sum-can);
}
