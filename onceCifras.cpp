#include <iostream>
#include <stdlib.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a,aux="",aux2="",aux3="";
long long mi=1000000000000,n,n2;
int main(){
    cin>>a;
    for(int i=0;i<(int)a.size()-2;++i){
        n=0;
        aux+=a[i];
        n=atoll(aux.c_str());
        for(int j=1;j<a.size()-i-1;++j){
            n2=0;
            aux2=a.substr(i+1,j);
            aux3=a.substr(i+j+1,11-1-j);
            n2+=atoll(aux2.c_str());
            n2+=atoll(aux3.c_str());
            mi=mi<n2+n?mi:n2+n;
        }
    }
    cout<<mi<<"\n";
}
