#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    char x,y;
    int a,cont=0;
    cin>>a>>x;
    for(int i=1;i<a;++i){
        cin>>y;
        if( (y==x && i%2==1) || (y!=x && i%2==0) )cont++;
    }
    cout<<(cont<a-cont?cont:a-cont)<<"\n";
}
