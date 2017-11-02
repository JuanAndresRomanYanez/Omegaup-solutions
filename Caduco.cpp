#include <stdio.h>
long long v[100],d,m,a,cont=0;
int n;
char p[1000000];
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i)scanf("%s%lld%lld%lld", p, &d, &m, &a),v[i]=d+(m*30)+(a*365);
    scanf("%lld%lld%lld", &d, &m, &a),d=d+(m*30)+(a*365);
    for(int i=0;i<n;++i)if(v[i]<d)cont++;
    printf("%lld\n", cont);
}
