#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n;
string x,l="";
int main(){
    optimizar_io
    cin>>n;
    vector<pair<string,string> >lol(n);
    for(int i=0;i<n;++i)cin>>lol[i].first>>lol[i].second;
    cin.ignore();
    getline(cin,x);
    for(int i=0;i<(int)x.size();++i){
        if(x[i]==' ' || x[i]=='.' || x[i]==','){
            for(int j=0;j<n;++j)if(lol[j].first==l){l=lol[j].second;break;}
            cout<<l<<x[i];
            l="";
        }
        else l+=x[i];
    }
}
