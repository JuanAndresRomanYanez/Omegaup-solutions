#include <iostream>
#include <stdlib.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int a,c;
    cin>>a;
    string b,d;
    while(a--){
            cin>>b;
            c=0;
            for(int i=0;i<(int)b.length();++i){
                d=b.at(i);
                    c+=atoi(d.c_str());
            }
            for(int i=2;i*i<=c;++i){
                if(c%i==0){cout<<"No UltraPrimo\n";goto kok;}
            }
            cout<<"UltraPrimo\n";
            kok:;
    }
}
