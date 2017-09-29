#include <stdio.h>
long long h=0,m=0,s=0,seg;
int main(){
    scanf("%lld", &seg);
    h=seg/3600;
    m=(seg/60)-(h*60);
    s=seg-(m*60+h*3600);
    printf("%lld %lld %lld", h, m, s);
}
