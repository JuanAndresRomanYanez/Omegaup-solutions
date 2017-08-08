#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a,x="";
    cin>>a;
    for(int i=0;i<(int)a.size();++i){
        if(a[i]!='?' && a[i]!=':')x+=a[i];
        if(a[i]=='?')cout<<"if("<<x<<")\n",x="";
        if(a[i]==':')cout<<"     "<<x<<";\n"<<"else\n"<<"     ",x="";
    }
    cout<<x<<";";
    return 0;
}
