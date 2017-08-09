#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a;
    cin>>a;
    int cont=0;
    for(int i=0;i<(int)a.size();++i)if(a[i]=='d')cont++;
    cout<<cont<<"\n";
    return 0;
}
