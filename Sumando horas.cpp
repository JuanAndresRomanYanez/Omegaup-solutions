#include <stdio.h>
long long h,m,s,sol=0;
int main(){
    for(int i=0;i<3;++i){
            scanf("%lld:%lld:%lld", &h, &m, &s);
            sol=sol+(h*3600)+(m*60)+s;
    }
    h=sol/3600,sol=sol-(h*3600),m=sol/60,sol=sol-(m*60),s=sol;
    if(m<10 && s<10)printf("%lld:0%lld:0%lld\n", h,m,s);
    else if(m<10)printf("%lld:0%lld:%lld\n", h,m,s);
    else if(s<10)printf("%lld:%lld:0%lld\n", h,m,s);
    else printf("%lld:%lld:%lld\n", h,m,s);
}
