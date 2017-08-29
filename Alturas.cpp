#include <stdio.h>
#include <algorithm>
int n,sum=0;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    std::sort(v,v+n);
    for(int i=0;i<n;i+=2)sum+=(v[i+1]-v[i]);
    printf("%i", sum);
}
