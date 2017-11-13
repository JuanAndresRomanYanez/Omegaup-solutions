#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<vector<long long> >lol(1000000);
int edges,queries,a,b;
int exist(int a,int b){
    for(int i=0;i<(int)lol[a].size();++i)if(lol[a][i]==b)return true;
    return false;
}
int main(){
    optimizar_io
    cin>>edges;
    while(edges--)cin>>a>>b,lol[a].push_back(b),lol[b].push_back(a);
    cin>>queries;
    while(queries--)cin>>a>>b,cout<<(exist(a,b)?"YES\n":"NO\n");
}
