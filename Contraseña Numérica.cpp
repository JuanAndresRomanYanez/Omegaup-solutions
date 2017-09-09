#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);
using namespace std;
string a,b;
long long cont=0;
bool ban=false;
int main(){
    optimizar_io
    cin>>a;
    while(cin>>b){
        cont++;
        if(cont<4 && b==a)ban=true;
    }
    cout<<(ban==true?"Bienvenido":"Gracias por Participar");
}
