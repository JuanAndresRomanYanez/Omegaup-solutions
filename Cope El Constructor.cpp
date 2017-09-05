#include <stdio.h>
long long n,m,r;
int main(){
    scanf("%lld%lld", &n, &m);
    long long v[n][m];
    for(int i=0;i<n;++i)for(int j=0;j<m;++j)scanf("%lld", &v[i][j]);
    scanf("%lld", &r);
    for(int i=0;i<n;++i){
        for(int k=0;k<r;++k){
            for(int j=0;j<m;++j)for(int l=0;l<r;++l)printf("%lld ", v[i][j]);
            printf("\n");
        }
    }
}
