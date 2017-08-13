#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n;
    cin>>n;
    long long x;
    vector<long long>pos,neg;
    for(int i=0;i<n;++i){
        cin>>x;
        if(x>0)pos.push_back(x);
        else neg.push_back(x);
    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    reverse(neg.begin(),neg.end());
    cout<<"POSITIVOS\n";
    for(int i=0;i<(int)pos.size();++i)cout<<pos[i]<<"\n";
    cout<<"NEGATIVOS\n";
    for(int i=0;i<(int)neg.size();++i)cout<<neg[i]<<"\n";
    return 0;
}
