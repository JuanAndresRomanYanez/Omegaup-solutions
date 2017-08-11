#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    string a,b;
    while(getline(cin,a)){
            b="";
            int cont=a.size();
                for(int i=0;i<(int)a.size();++i){
                        b+=a[i];
                    if(a[i]==' ' || i==cont-1){
                        if(b=="cero " || b=="cero"){
                            if(i<cont-1){cout<<"0 ";b="";}
                            else{cout<<"0";b="";}
                        }
                        if(b=="uno " || b=="uno")  {
                            if(i<cont-1){cout<<"1 ";b="";}
                            else{cout<<"1";b="";}
                        }
                        if(b=="dos " || b=="dos")  {
                            if(i<cont-1){cout<<"2 ";b="";}
                            else{cout<<"2";b="";}
                        }
                        if(b=="tres " || b=="tres"){
                            if(i<cont-1){cout<<"3 ";b="";}
                            else{cout<<"3";b="";}
                        }
                        if(b!="cero " && b!="uno " && b!="dos " && b!="tres " && b!="cero" && b!="uno" && b!="dos" && b!="tres"){
                            if(i<cont-1){cout<<b<<" ";b="";}
                            else{cout<<b;b="";}
                        }
                    }
                }
                cout<<"\n";
    }
    return 0;
}
