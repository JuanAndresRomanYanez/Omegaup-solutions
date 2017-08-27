#include <iostream>
#include <map>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long ma;
    string a;
    while(cin>>a){
        map<char,int>mp;
        ma=0;
        for(int i=0;i<(int)a.size();++i)mp[a[i]]++;
        for(map<char,int>::iterator it=mp.begin();it!=mp.end();++it)ma=ma<it->second?it->second:ma;
        cout<<(int)a.size()-ma<<"\n";
    }
    return 0;
}
