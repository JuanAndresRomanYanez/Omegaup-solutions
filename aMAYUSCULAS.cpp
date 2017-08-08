#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a;
    getline(cin,a);
    for(int i=0;i<(int)a.size();++i){
        if(isalpha(a[i]))a[i]=toupper(a[i]);
        cout<<a[i];
    }
    cout<<"\n";
    return 0;
}
