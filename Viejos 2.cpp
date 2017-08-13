#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a,z,res=0;
    cin>>a;
    string x,y,ans="";
    for(int i=0;i<a;++i){
        cin>>x>>y>>z;
        if(z>res)res=z,ans=x+" "+y;
    }
    cout<<ans<<" "<<res<<"\n";
    return 0;
}
