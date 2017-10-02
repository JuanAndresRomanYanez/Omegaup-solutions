#include <stdio.h>
#include <algorithm>
long long n,m,sum=0,cont=0;
int main(){
    scanf("%lld%lld", &n, &m);
    long long v[n];
    for(int i=0;i<n;++i){
            scanf("%lld", &v[i]);
            sum+=v[i];
    }
    if(sum<m)printf("-1");
    else{
        std::sort(v,v+n);
        for(int i=n-1;i>=0;--i){
            m-=v[i];
            cont++;
            if(m<=0)break;
        }
        printf("%lld", cont);
    }
}
