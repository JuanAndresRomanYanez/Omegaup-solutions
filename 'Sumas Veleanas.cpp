#include <stdio.h>
#include <algorithm>
#include <vector>
int main(){
    int n,aux=0;
    scanf("%i", &n);
    int v[n],l[n];
    std::vector<int>p;
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    for(int i=0;i<n;++i)scanf("%i", &l[i]);
    std::sort(v,v+n);
    std::sort(l,l+n);
    std::reverse(l,l+n);
    for(int i=n-1;i>=0;--i){
        aux=v[i]+l[i]+aux;
        if(aux>=10){p.push_back(aux-10);aux=1;}
        else {p.push_back(aux);aux=0;}
    }
    if(aux>0)p.push_back(aux);
    for(int i=p.size()-1;i>=0;--i)printf("%i", p[i]);
    printf("\n");
}
