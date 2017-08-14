#include <stdio.h>
int main(){
    long long a,x,sum=0;
    scanf("%lld", &a);
    while(a--){
        scanf("%lld", &x);
        sum+=x;
    }
    printf("%lld\n", sum);
}
