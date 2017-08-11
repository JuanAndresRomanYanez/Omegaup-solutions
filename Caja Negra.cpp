#include <iostream>
#include <map>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string g,res="";
    int a,cont=0;
    cin>>a>>g;
    map<char,int>lol;
    for(int i=0;i<a;++i)lol[g[i]]++;
    for(map<char,int>::iterator it=lol.begin();it!=lol.end();++it)
        if(it->second>cont)cont=it->second,res=it->first;
    cout<<res<<"\n";
}
