#include <iostream>
#include <sstream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int j;
    string x="",aux="",lol;
    for(int i=1;i<=100000;++i){
        lol=static_cast<ostringstream*>(&(ostringstream()<<i) )->str();
        x+=lol;
    }
    cin>>j;
    aux=static_cast<ostringstream*>(&(ostringstream()<<j ) )->str();
    for(int i=0;i<=(int)x.size()-(int)aux.size();++i){
        if(x.substr(i,(int)aux.size())==aux){cout<<i+1<<"\n";return 0;}
    }
    return 0;
}
