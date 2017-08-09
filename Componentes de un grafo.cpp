#include <iostream>
#include <vector>
#include <string.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int c=0,nodos,n1,n2,ma=-1,mi=30001;
bool vis[300001];
vector<vector<int> >lol;
void dfs(int u){
    vis[u]=true,c++;
    for(int i=0;i<(int)lol[u].size();++i)if(!vis[lol[u][i]])dfs(lol[u][i]);
}
int main(){
    optimizar_io
    cin>>nodos;
    lol.assign((nodos*2)+5,vector<int>());
    memset(vis,true,sizeof vis);
    for(int i=0;i<nodos;++i){
        cin>>n1>>n2;
        lol[n1].push_back(n2);
        lol[n2].push_back(n1);
        vis[n1]=vis[n2]=false;
    }
    for(int i=1;i<=(nodos*2);++i)if(!vis[i])dfs(i),ma=ma>c?ma:c,mi=mi<c?mi:c,c=0;
    cout<<mi<<" "<<ma;
}
