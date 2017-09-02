#include <stdio.h>
#include <algorithm>
int n,m,sum=0;
int main(){
    scanf("%i%i", &n, &m);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]),sum+=v[i];
    if(sum<m)printf("-1");
    else{
        sum=0;
        std::sort(v,v+n);
        for(int i=n-1;i>=0;--i){
            m-=v[i],sum++;
            if(m<=0)break;
        }
        printf("%i", sum);
    }
}
