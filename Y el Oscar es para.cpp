#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);
using namespace std;
int n;
long long x,y,a=-9223372036854775808,b=-9223372036854775808;
string res1,res2,s;
int main(){
    optimizar_io
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s>>x>>y;
        if(x>a)a=x,res1=s;
        if(y>b)b=y,res2=s;
    }
    cout<<res1<<"\n"<<res2<<"\n";
    return 0;
}
