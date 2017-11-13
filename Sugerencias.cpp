#include <iostream>
#include <string>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n;
string x;
int main(){
    optimizar_io
    cin>>n;
    vector<string>lol(n);
    for(int i=0;i<n;++i)cin>>lol[i];
    cin>>x;
    for(int i=0;i<n;++i)if(((int)lol[i].size()>=(int)x.size()) && (lol[i].substr(0,(int)x.size())==x))cout<<lol[i]<<"\n";
}
