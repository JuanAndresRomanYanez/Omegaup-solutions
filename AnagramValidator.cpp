#include <iostream>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a,b,c="",d="";
int main(){
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<(int)a.size();++i){
            if(isalpha(a[i])){
                    if(isupper(a[i]))a[i]+=32;
                    c+=a[i];
            }
    }
    for(int i=0;i<(int)b.size();++i){
            if(isalpha(b[i])){
                    if(isupper(b[i]))b[i]+=32;
                    d+=b[i];
            }
    }
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if(c==d)cout<<"Son anagramas";
    else cout<<"No son anagramas";
}
