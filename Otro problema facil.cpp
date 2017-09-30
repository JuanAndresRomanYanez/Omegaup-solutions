
#include <iostream>
#include <map>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a,x;
map<string,long long>lol;
int main(){
    optimizar_io
    cin>>a;
    for(int i=0;i<(int)a.size();++i){
        x=a[i],lol[x]++;
        for(int j=i+1;j<(int)a.size();++j)x+=a[j],lol[x]++;
    }
    for(map<string,long long>::iterator it=lol.begin();it!=lol.end();++it)
        cout<<it->first<<" "<<it->second<<"\n";
}
