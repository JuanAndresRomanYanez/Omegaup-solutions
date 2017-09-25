#include <iostream>
#include <stack>
#include <queue>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test;
string x;
queue<long long>kok;
stack<long long>lol;
long long n;
int main(){
    optimizar_io
    cin>>test;
    cin.ignore();
    while(test--){
        getline(cin,x);
        if(x=="meter datos"){
            cin>>n;
            lol.push(n);
            kok.push(n);
            cin.ignore();
        }
        else {
            cout<<lol.top()<<" "<<kok.front()<<"\n";
            lol.pop();
            kok.pop();
        }
    }
    return 0;
}
