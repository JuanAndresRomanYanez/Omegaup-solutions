#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n,x,inte=-2147483647,bur=2147483647;
string s,sm,du;
int main(){
    optimizar_io
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s>>x;
        if(x>inte)inte=x,sm=s;
        if(x<bur)bur=x,du=s;
    }
    cout<<sm<<" "<<du<<"\n";
}
