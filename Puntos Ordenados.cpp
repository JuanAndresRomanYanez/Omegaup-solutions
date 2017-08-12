#include <stdio.h>
#include <vector>
#include <algorithm>
int main(){
    int a;
    scanf("%i", &a);
    std::vector<std::pair<int,int> >g(a);
    for(int i=0;i<a;++i)scanf("%i%i", &g[i].first, &g[i].second);
    std::sort(g.begin(),g.end());
    for(int i=0;i<a;++i)printf("%i %i\n", g[i].first, g[i].second);
}
