#include <stdio.h>
#include <vector>
int n;
int solve(int n){
    int x;
    std::vector<int>v;
    for(int i=0;i<n;++i){
            scanf("%i", &x);
            if(x&1)v.push_back(x);
            else printf("%i ", x);
    }
    for(int i=0;i<(int)v.size();++i)printf("%i ", v[i]);
}
int main(){
    scanf("%i", &n),solve(n);
}
