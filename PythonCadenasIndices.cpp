#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
int main(){
    optimizar_io
    getline(cin,a);
    cout<<a.substr(0,5)<<"\n"<<a.substr((int)a.size()-8,8)<<"\n";
    for(int i=0;i<(int)a.size();++i)if(i%2==0)cout<<a[i];
    cout<<"\n";
    for(int i=17;i>=9;--i)cout<<a[i];
    cout<<"\n";
}
