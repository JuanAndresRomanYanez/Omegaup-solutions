
#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n;
string x;
int main(){
    cin>>n;
    vector< pair<string,long long> >lol(n);
    for(int i=0;i<n;++i)cin>>lol[i].first;
    for(int i=0;i<n;++i)cin>>lol[i].second;
    cin>>x;
    for(int i=0;i<n;++i)if(lol[i].first==x){cout<<lol[i].second;return 0;}
}
