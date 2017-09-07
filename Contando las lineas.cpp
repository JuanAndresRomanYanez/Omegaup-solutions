#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
long long cont=0;
bool ban;
int main(){
    optimizar_io
    while(getline(cin,a) && a!="0"){
        ban=false;
        for(int i=0;i<(int)a.size();++i){
                if(ban==false){
                    if(a[i]=='}' || a[i]=='{')goto kok;
                    if(a[i]!=' ' && a[i]!='{' && a[i]!='}'){
                            if(i<(int)a.size()-1 && (a[i]=='/' && a[i+1]=='/') )goto kok;
                            ban=true;
                    }
                }
        }
        if(ban==true)cont++;
        kok:;
    }
    cout<<cont;
}
