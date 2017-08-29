#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n,x;
double sum=0;
int main(){
    optimizar_io
    cin>>n;
    vector<pair<string,double> >lol(n);
    for(int i=0;i<n;++i){
            cin>>x;
            cin.ignore();
            getline(cin,lol[i].first);
            cin>>lol[i].second;
            sum+=lol[i].second;
    }
    sum/=n;
    for(int i=0;i<n;++i)if(lol[i].second>sum)cout<<i+1<<" "<<lol[i].first<<"\n";
}
