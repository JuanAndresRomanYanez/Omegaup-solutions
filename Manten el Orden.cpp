#include <stdio.h>
#include <algorithm>
int n;
int main(){
    scanf("%i", &n);
    int v[n+1];
    for(int i=0;i<=n;++i)scanf("%i", &v[i]);
    std::sort(v,v+n+1);
    for(int i=0;i<=n;++i)printf("%i\n", v[i]);
}
