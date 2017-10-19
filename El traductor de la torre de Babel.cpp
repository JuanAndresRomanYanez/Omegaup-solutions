#include <iostream>
#include <map>
#include <sstream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
map<string,string>lol;
string f,s;
int main(){
    optimizar_io
    while (getline(cin, f) && f!=""){
        stringstream ss(f);
        ss>>f>>s;
        lol[s]=f;
    }
    while(cin>>f)cout<<(lol.count(f)==0?"eh":lol[f])<<"\n";
}
