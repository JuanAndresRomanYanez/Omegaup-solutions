#include <iostream>
#include <map>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n;
string name,ans;
map<string,string>lol;
int main(){
    optimizar_io
    cin>>n;
    while(n--)cin>>name>>ans,lol[name]=ans;
    cin>>name;
    cout<<lol[name];
}
