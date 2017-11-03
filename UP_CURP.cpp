#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string n,l,g,d,m,y,res;
int main(){
    optimizar_io
    while(cin>>n>>l>>g>>d>>m>>y){
       res="";
       res+=l[0];
       for(int i=1;i<(int)l.size();++i)if(l[i]=='A' || l[i]=='E' || l[i]=='I' || l[i]=='O' || l[i]=='U'){res+=l[i];break;}
       res=res+g[0]+n[0]+y[2]+y[3]+m[0]+m[1]+d[0]+d[1];
       cout<<res<<"\n";
    }
    return 0;
}
