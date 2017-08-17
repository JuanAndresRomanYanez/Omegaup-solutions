#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
    long long a,cont=0;
    long long sum[26];
    cin>>a;
    string b("", a);
    for(int i=0;i<a;++i)cin>>b[i];
    cin>>a;
    string g("", a);
    for(int i=0;i<a;++i)cin>>g[i];
    for(int i=0;i<26;++i)cin>>sum[i];
    for(int i=0;i<(int)b.size();++i){
        for(int j=0;j<(int)g.size();++j){
            if(b[i]==g[j] && g[j]!='*' && b[i]!='*'){
                    cont+=sum[g[j]-65];
                    g[j]='*';
                    b[i]='*';
            }
        }
    }
    cout<<cont<<"\n";
    return 0;
}
