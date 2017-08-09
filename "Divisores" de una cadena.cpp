#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long cont=0,div=2;
    string a;
    cin>>a;
    for(int i=0;i<(int)a.length();++i) cont+=(char)toupper(a[i]);
    for(int i=2;i<=cont/2;++i) if(cont%i==0)div++;
    cout<<div<<"\n";
    return 0;
}
