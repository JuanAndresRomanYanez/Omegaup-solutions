
#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
char c;
int a;
int main(){
    optimizar_io
    cin>>a;
    cin.ignore();
    while(cin>>c)if(c=='d')a--;
    cout<<(a<=0?"SI\n":"NO\n");
}
