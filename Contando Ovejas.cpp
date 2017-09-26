#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test,casos,cont;
string x;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cont=0;
        cin>>casos;
        while(casos--){
            cin>>x;
            if(x=="oveja")cont++;
        }
        cout<<cont<<"\n";
    }
}
