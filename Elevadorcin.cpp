#include <stdio.h>
long long n,m,res=0,sum=0,x;
int main(){
    scanf("%lld%lld", &n, &m);
    while(n--){
            scanf("%lld", &x);
            if(sum+x>m)sum=0,res++;
            sum+=x;
    }
    printf("%lld", res);
}

