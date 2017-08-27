#include <iostream>
#include <vector>
#include <iomanip>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int cases;
double weight,height;
int main(){
    optimizar_io
    cin>>cases;
    vector<pair<string,pair<string,double> > >lol(cases);
    for(int i=0;i<cases;++i){
        cin>>lol[i].first;
        cin.ignore();
        getline(cin, lol[i].second.first);
        cin>>weight>>height;
        lol[i].second.second=(weight/(height*height) );
    }
    for(int i=cases-1;i>=0;--i)
    cout<<lol[i].first<<" "<<lol[i].second.first<<" "<<fixed<<setprecision(1)<<lol[i].second.second<<"\n";
}
