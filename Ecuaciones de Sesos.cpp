#include <stdio.h>
int main(){
    long long cases,a,b,c;
    scanf("%lld", &cases);
    while(cases--){
            scanf("%lld%lld%lld", &a, &b, &c);
            printf(( ((b*b)-(4*a*c))<0)?"NO\n":"SI\n");
    }
}
