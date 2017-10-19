#include <stdio.h>
#include <algorithm>
#include <vector>
int n;
std::vector<long long>lol;
int main(){
    while(scanf("%i", &n)!=EOF)lol.push_back(n);
    std::sort(lol.begin(),lol.end());
    printf("%i", lol[lol.size()-2]);
}
