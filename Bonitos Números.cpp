#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n;
string s;
int main(){
    optimizar_io
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;++i){
        cin>>s;
        cout<<((int)s.size()&1?"NO\n":"SI\n");
    }
}
