#include <iostream>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
long long y=0,z=0,cases,x;
int main(){
    optimizar_io
    cin>>cases>>a;
    while(cases--){
        cin>>x;
        if(x==1)y++;
        if(x==0)z++;
    }
    if(y%2!=0)for(int i=0;i<(int)a.size();++i){
            if(isalpha(a[i])){
                if(isupper(a[i]))a[i]=tolower(a[i]);
                else a[i]=toupper(a[i]);
            }
    }
    if(z%2!=0)reverse(a.begin(),a.end());
    cout<<a<<"\n";
}
