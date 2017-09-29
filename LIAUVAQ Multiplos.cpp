#include <stdio.h>
long long a,b,c;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c);
    if(a%b==0 && a%c==0)printf("%lld es multiplo de %lld y de %lld silmultaneamente",a,b,c);
    else printf("%lld no es multiplo de %lld y de %lld silmultaneamente", a, b,c);
}
