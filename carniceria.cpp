#include <stdio.h>
long long d,h,m;
long long solve(long long d, long long h, long long m){h=h*60+m;
    if(d==1){
        if(h>=420 && h<=1140)printf("abierto\n");
        else printf("cerrado\n");
    }
    if(d==2){
        if( (h>=480 && h<=840) || (h>=960 && h<=1200) ) printf("abierto\n");
        else printf("cerrado\n");
    }
    if(d==3){
        if( (h>=420 && h<=780) || (h>=900 && h<=1140) )printf("abierto\n");
        else printf("cerrado\n");
    }
    if(d==4){
        if( (h>=420 && h<=540) || (h>=720 && h<=960) || (h>=1020 && h<=1260) )printf("abierto\n");
        else printf("cerrado\n");
    }
    if(d==5){
        if( (h>=510 && h<=840) || (h>=945 && h<=1110) ) printf("abierto\n");
        else printf("cerrado\n");
    }
    if(d==6){
        if(h>=630 && h<=885)printf("abierto\n");
        else printf("cerrado\n");
    }
    if(d==7)printf("cerrado\n");
}
int main(){scanf("%lld%lld%lld", &d, &h, &m),solve(d,h,m);}
