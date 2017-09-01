#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int v[123];
string s;
int main(){
    optimizar_io
    for(int i=0;i<123;++i)v[i]=0;
    getline(cin,s);
    for(int i=0;i<(int)s.size();++i)v[s[i]]++;
    for(int i=97;i<123;++i)cout<<v[i]<<"\n";
}
