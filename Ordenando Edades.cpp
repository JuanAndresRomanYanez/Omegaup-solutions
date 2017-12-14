#include <stdio.h>
#include <algorithm>
int n;
int solve(int n){
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    std::sort(v,v+n);
    for(int i=0;i<n;++i)printf("%i ", v[i]);
}
int main(){
    scanf("%i", &n),solve(n);
}
