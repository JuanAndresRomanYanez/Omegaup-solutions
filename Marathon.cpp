#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n;
double can;
string x,y;
int main(){
    optimizar_io
    cin>>n;
    vector<pair<double,string> >lol(n);
    for(int i=0;i<n;++i){
        y="";
        cin>>x;
        y+=x;
        cin.ignore();
        getline(cin,x);
        y=y+" "+x;
        cin>>can;
        lol[i].first=can;
        lol[i].second=y;
    }
    sort(lol.begin(),lol.end());
    for(int i=0;i<3;++i)cout<<lol[i].second<<" "<<lol[i].first<<"\n";
    return 0;
}
