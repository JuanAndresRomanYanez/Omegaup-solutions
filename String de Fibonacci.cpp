#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a,b;
int n;
vector<string>lol;
int main(){
    optimizar_io
    cin>>a>>b>>n;
    lol.push_back(a);
    lol.push_back(b);
    for(int i=2;i<n;++i)lol.push_back(lol[i-2]+lol[i-1]);
    cout<<lol[n-1]<<"\n";
    return 0;
}
