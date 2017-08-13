#include <stdio.h>
int main(){
    int a;
    long long res=1;
    scanf("%i", &a);
    for(int i=1;i<=a;++i)res*=i;
    printf("%lld\n", res);
}

