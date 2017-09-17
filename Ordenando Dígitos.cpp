#include <stdio.h>
#include <algorithm>
int n;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    std::sort(v,v+n);
    for(int i=0;i<n;++i)printf("%i ", v[i]);
}
