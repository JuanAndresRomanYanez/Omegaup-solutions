#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
double a;
int x;
string l;
int main(){
    optimizar_io
    cin>>a>>l;
    if(l=="preparatoria"){
        if(a>=9.5)cout<<"$1485";
        else if(a>=9 && a<9.5)cout<<"$1620";
        else if(a>7 && a<9)cout<<"$1800";
        else if(a<=7){
                cin>>x;
                if(x<4)cout<<"$1620";
                else cout<<"$1440";
        }
    }
    else{
        if(a>=9.5)cout<<"$2640";
        else cout<<"$3300";
    }
    return 0;
}
