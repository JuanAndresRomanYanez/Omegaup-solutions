#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a;
    while(getline(cin,a) ){
        for(int i=0;i<(int)a.size();++i){
            if(a[i]=='a')a[i]='x';
            if(a[i]=='e')a[i]='w';
            if(a[i]=='i')a[i]='y';
            if(a[i]=='o')a[i]='k';
            if(a[i]=='u')a[i]='z';
        }
        cout<<a<<"\n";
    }
    return 0;
}
