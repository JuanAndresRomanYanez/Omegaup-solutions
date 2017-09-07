#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a,b;
int main(){
    optimizar_io
    cin>>a;
    for(int i=0;i<(int)a.size();++i){
        b="";
        b=a.substr(i,(int)a.size())+a.substr(0,i);
        for(int j=0,k=(int)a.size()-1;j<(int)a.size();++j,--k){
            if(b[j]!=b[k])goto kok;
        }
        cout<<"Circular";
        return 0;
        kok:;
    }
    cout<<"No Circular";
}
