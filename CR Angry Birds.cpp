#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int cont=0;
    string a;
    while(cin>>a){
        if(a=="o--")cont++;
        if(a=="oo-")cont+=2;
        if(a=="ooo")cont+=3;
    }
    cout<<cont<<"\n";
    return 0;
}
