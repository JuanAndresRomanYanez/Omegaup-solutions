#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
const int MAX=100005;
vector<vector<int> >g;
int n,a,x,y,ve;
bool vis[MAX];
int dist[MAX];
void dfs(int u){
    cout<<u<<" ";
    vis[u]=true;
    for(int i=0;i<(int)g[u].size();++i)if(!vis[g[u][i]])dfs(g[u][i]);
}
void bfs(int u){
    queue<int>q;
    q.push(u);
    dist[u]=0;
    while(!q.empty()){
        u=q.front();
        cout<<u<<" ";
        q.pop();
        for(int i=0;i<(int)g[u].size();++i){
            if(dist[g[u][i]]==-1){
                q.push(g[u][i]);
                dist[g[u][i]]=dist[u]+1;
            }
        }
    }
}
int main(){
    optimizar_io
    cin>>n;
    g.assign(n+5,vector<int>());
    memset(vis,false,sizeof vis);
    memset(dist,-1,sizeof dist);
    for(int i=0;i<n;++i){
        cin>>x>>ve;
        while(ve--){
            cin>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
    }
    bfs(0);
    cout<<"\n";
    dfs(0);
}
