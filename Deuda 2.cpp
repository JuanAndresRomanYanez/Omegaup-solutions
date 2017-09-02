#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
double l,n,x,sum=0;
int m;
int main(){
    optimizar_io
    cin>>l>>n;
    cin>>m;
    for(int i=0;i<m;++i){
        cin>>x;
        sum+=x;
    }
    cout<<(n-sum)+(l*(n/100))<<"\n";
    return 0;
}
