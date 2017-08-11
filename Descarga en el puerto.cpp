#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main (){
    optimizar_io
    string l;
    int g,cont=0,conta,conll;
    vector<int>lol;
    while(cin>>l){
        if(l=="D" || l=="P"){
                cin>>g;
                if(l=="D"){
                    cont++;
                    lol.push_back(g);
                }
                else{
                    conta=0,conll=0;
                    for(int i=cont-1;i>=0;--i){
                        if(lol[i]==0)conta++;
                        else if(lol[i]==g)break;
                        else conll++;
                    }
                    cout<<conll-conta<<"\n";
                }
        }
        else lol[cont-1]=0;
    }
}
