#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n,m,k,l;
int main(){
    optimizar_io
    cin>>n>>m>>k>>l;
    char v[n][m];
    for(int i=0;i<n;++i)for(int j=0;j<m;++j)cin>>v[i][j];
    for(int i=0;i<n;++i){
        for(int aux=0;aux<k;++aux){
            for(int j=0;j<m;++j){
                for(int auxi=0;auxi<l;++auxi){
                    cout<<v[i][j];
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
