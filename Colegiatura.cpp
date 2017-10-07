#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
double a,b;
int main(){
    optimizar_io
    cin>>a>>b;
    if(b>=9)cout<<"$"<<((a*1600)/100)*70;
    else cout<<"$"<<(a*1600)+(a*1600/100*16);
}
