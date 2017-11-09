#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
int main(){
    optimizar_io
    while(getline(cin,a)){
            for(int i=0;i<(int)a.size();++i){
                if(a[i]==' ')cout<<"_";
                else cout<<a[i];
            }
            cout<<"\n";
    }
}
