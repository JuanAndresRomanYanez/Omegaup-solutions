#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
long long cont,n;
int main(){
    optimizar_io
    cin>>n;
    while(n--){
        cont=0;
        cin>>a;
            for(int i=0;i<(int)a.size();++i){
                if(a[i]=='B'){
                    if(i-1>=0)                  if(a[i-1]=='W')cont++,a[i-1]='*';
                    if(i-2>=0)                  if(a[i-2]=='W')cont++,a[i-2]='*';
                    if((i+1)<(int)a.size())     if(a[i+1]=='W')cont++,a[i+1]='*';
                    if((i+2)<(int)a.size())     if(a[i+2]=='W')cont++,a[i+2]='*';
                }
            }
        cout<<cont<<"\n";
    }
}
