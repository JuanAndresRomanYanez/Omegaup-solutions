#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test,n,m,b;
string x;
char s;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        m=b=0;
        cin>>x>>n;
        while(n--){
            cin>>s;
            if(s=='B')b++;
            else m++;
        }
        cout<<x<<" "<<(b-(m*2)>0?"REGALO\n":"CARBON\n");
    }
    return 0;
}
