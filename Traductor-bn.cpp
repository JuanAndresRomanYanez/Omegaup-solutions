#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<pair<int,int> >lol;
int n,m,x,y,in,f,mid;
int main(){
    optimizar_io
    cin>>n>>m;
    for(int i=0;i<n;++i)cin>>x>>y,lol.push_back(make_pair(x,y));
    sort(lol.begin(),lol.end());
    while(m--){
        cin>>x;
        in=0,f=n-1;
        while(in<=f){
            mid=(in+f)/2;
            if(lol[mid].first==x){cout<<lol[mid].second<<"\n";goto kok;}
            if(lol[mid].first>x)f=mid-1;
            else in=mid+1;
        }
        cout<<"C?\n";
        kok:;
    }
}
