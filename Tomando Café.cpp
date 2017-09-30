#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
double n;
int main(){
    optimizar_io
    cin>>n;
    if(n>=8)cout<<"NO CAFE";
    else cout<<(8-n)*1.5;
}
