#include <iostream>
#include <map>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n,y;
map<string,int>lol;
string x;
int main(){
    optimizar_io
    cin>>n;
    while(n--)cin>>x>>y,lol[x]=y;
    cin>>x;
    cout<<lol[x];
}
