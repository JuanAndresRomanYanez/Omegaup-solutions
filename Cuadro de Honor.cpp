#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
    string x;
    int cases;
    double y;
    vector<string>nombres;
int main(){
    optimizar_io
    cin>>cases;
    while(cases--){
        cin.ignore();
        getline(cin,x);
        cin>>y;
        if(y>=9.5)nombres.push_back(x);
    }
    sort(nombres.begin(),nombres.end());
    for(int i=0;i<(int)nombres.size();++i)cout<<nombres[i]<<"\n";
}
