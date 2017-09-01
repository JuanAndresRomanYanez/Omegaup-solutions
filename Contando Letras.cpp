#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int in,f,v[123];
string s;
int main(){
    optimizar_io
    for(int i=0;i<123;++i)v[i]=0;
    cin>>in>>f;
    cin.ignore();
    getline(cin,s);
    for(int i=in;i<=f;++i)v[s[i]]++;
    for(int i=97;i<123;++i)cout<<(char)i<<"="<<v[i]<<"\n";
}
