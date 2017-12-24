#include <stdio.h>
#include <algorithm>
int n,q,in,mid,f;
long long x;
int main(){
    scanf("%i%i", &n, &q);
    long long v[n];
    for(int i=0;i<n;++i)scanf("%lld", &v[i]);
    std::sort(v,v+n);
    for(int i=0;i<q;++i){
            scanf("%lld", &x);
            in=0,f=n-1;
            while(in<=f){
                mid=(in+f)/2;
                if(v[mid]==x){
                    printf("%i ", mid);
                    break;
                }
                if(v[mid]>x)f=mid-1;
                else in=mid+1;
            }
    }
}
