#include <stdio.h>
int n;
long long sum=0,x;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%lld", &x);
        sum+=x;
    }
    printf("%lld 0\nNO ME AMA :(\n" , sum);
}
