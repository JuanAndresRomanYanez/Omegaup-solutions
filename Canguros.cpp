#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int f,c,x,cont=0,i=0,j=0;
    string m;
    cin>>f>>c;
    int v[c];
    while(c--){
        cin>>m;
        if(m=="N"){
            cin>>x;
            v[i]=x+1;
            ++i;
            cont++;
        }
        else if(m=="A"){
            cont--;
            f-=v[j];
            ++j;
        }
        else if(m=="C")cout<<cont<<"\n";
        else cout<<f<<"\n";
    }
}
