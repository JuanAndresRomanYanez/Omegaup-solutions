#include <iostream>
#include <stdlib.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string x,y,lol;
    int a,m,l,cont=0,res=0,aux;
    cin>>a>>x>>y;
    for(int i=0;i<a;++i){
        lol=x[i];
        m=atoi(lol.c_str());
        lol=y[i];
        l=atoi(lol.c_str());
        if(l>m)aux=l,l=m,m=aux;
        res=(m-l<10-m+l?m-l:10-m+l);
        cont+=res;
    }
    cout<<cont<<"\n";
    return 0;
}
