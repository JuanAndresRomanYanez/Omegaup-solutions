#include <iostream>
#include <algorithm>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
    long long x;
    vector<long long>kok;
        kok.push_back(47);
        kok.push_back(74);
        string a="4477";
            do{
            x=atoll(a.c_str());
            kok.push_back(x);
            }
            while(next_permutation(a.begin(),a.end()));
        a="444777";
            do{
            x=atoll(a.c_str());
            kok.push_back(x);
            }
            while(next_permutation(a.begin(),a.end()));
        a="44447777";
            do{
            x=atoll(a.c_str());
            kok.push_back(x);
            }
            while(next_permutation(a.begin(),a.end()));
        a="4444477777";
            do{
            x=atoll(a.c_str());
            kok.push_back(x);
            }
            while(next_permutation(a.begin(),a.end()));
    sort(kok.begin(),kok.end());
    int casos;
    cin>>casos;
    for(int i=0;i<casos;++i){
        cin>>x;
        for(int i=0;i<kok.size();++i){
            if(x<=kok[i]){cout<<kok[i]<<"\n";break;}
        }
    }
    return 0;
}
