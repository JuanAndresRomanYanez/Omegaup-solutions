#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
        optimizar_io
        string s,g;
        while(getline(cin,s) ){
                g=s;
                for(int i=0;i<(int)s.size();++i){
                    if(isalpha(s[i])){
                        g[i]=tolower(g[i]);
                        s[i]=toupper(s[i]);
                    }
                }
                cout<<s<<"\n"<<g<<"\n";
        }
        return 0;
}
