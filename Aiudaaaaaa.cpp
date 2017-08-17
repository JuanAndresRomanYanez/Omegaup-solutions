#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int cont=0;
    string a;
    cin>>a;
    for(int i=4;i<(int)a.size();++i)if(a[i]=='a')cont++;
    cout<<cont<<"\n";
}
