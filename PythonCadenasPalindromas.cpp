#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a,b="";
int main(){
    optimizar_io
    cin>>a;
    for(int i=(int)a.size();i>=0;--i){
        if(isalpha(a[i])){
            a[i]=tolower(a[i]);
            b+=a[i];
        }
    }
    cout<<(a==b?"SI":"NO\n");
}
