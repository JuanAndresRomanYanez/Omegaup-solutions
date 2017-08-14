#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a;
    cin>>a;
    vector<int>lol;
    while(a>0){
        lol.push_back(a%16);
        a/=16;
    }
    for(int i=(int)lol.size()-1;i>=0;--i){
        if(lol[i]>9){
            if(lol[i]==10)cout<<"A";
            if(lol[i]==11)cout<<"B";
            if(lol[i]==12)cout<<"C";
            if(lol[i]==13)cout<<"D";
            if(lol[i]==14)cout<<"E";
            if(lol[i]==15)cout<<"F";
        }
        else cout<<lol[i];
    }
    return 0;
}
