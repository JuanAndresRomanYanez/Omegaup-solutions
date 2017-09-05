#include <stdio.h>
#include <algorithm>
long long n,m,x,in,f,mid,c;
int main(){
    scanf("%lld%lld", &n, &m);
    long long v[n*m];
    for(int i=0;i<n*m;++i)scanf("%lld", &v[i]);
    std::sort(v,v+n*m);
    scanf("%lld", &x);
    while(x--){
        scanf("%lld", &c);
        in=0,f=n*m-1;
        while(in<=f){
            mid=(in+f)/2;
            if(v[mid]==c){printf("SI\n");goto kok;}
            if(v[mid]>c)f=mid-1;
            else in=mid+1;
        }
        printf("NO\n");
        kok:;
    }
}
