#include <stdio.h>
int n,x,y;
long long res;
int main(){
    scanf("%i", &n);
    int v[n-1];
    for(int i=0;i<n-1;++i)scanf("%i", &v[i]);
    scanf("%lld", &res);
    for(int i=0;i<n-1;++i){
        scanf("%i", &y);
        if(v[i]==0)res+=y;
        if(v[i]==1)res-=y;
        if(v[i]==2)res*=y;
        if(v[i]==3)res/=y;
    }
    printf("%lld", res);
}
