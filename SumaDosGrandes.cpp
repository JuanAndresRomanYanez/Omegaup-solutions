#include <stdio.h>
#include <algorithm>
long long v[6];
int main(){
    for(int i=0;i<6;++i)scanf("%lld", &v[i]);
    std::sort(v,v+6);
    printf("%lld", v[5]+v[4]);
}
