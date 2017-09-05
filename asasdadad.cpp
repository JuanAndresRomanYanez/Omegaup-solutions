#include <stdio.h>
#include <algorithm>
int n;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    std::sort(v,v+n);
    for(int i=n-1;i>1;--i){
        if(v[i-2]+v[i-1]>v[i]){printf("%i\n", v[i]+v[i-1]+v[i-2]);return 0;}
    }
    printf("-1\n");
}
