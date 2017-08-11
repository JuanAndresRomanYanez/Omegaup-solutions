#include <stdio.h>
int main(){
    int a,x;
    long long sum=0;
    scanf("%i", &a);
    while(a--){
        scanf("%i", &x);
        sum+=(x*(x+1)/2);
    }
    printf("%lld\n", sum);
}
