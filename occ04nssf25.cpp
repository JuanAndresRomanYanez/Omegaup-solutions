#include <stdio.h>
long long n;
int main(){
    scanf("%lld", &n);
    for(int i=2;i*i<=n;++i)if(n%i==0){printf("NO %i", i);return 0;}
    printf("SI");
}
