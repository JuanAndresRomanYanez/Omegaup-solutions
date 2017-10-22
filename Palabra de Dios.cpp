#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<string>lol(5);
string pal="jehovah";
bool ban=false;
int x,y,x1=-1,y1=-1;
int main(){
    for(int i=0;i<5;++i)cin>>lol[i];
    for(int i=0;i<7;++i){
        cin>>x>>y;
        if(lol[x][y]!=pal[i] && x1==-1 && y1==-1)x1=x,y1=y;
    }
    if(x1!=-1)cout<<"El Dr. Jones cayo en ("<<x1<<","<<y1<<")\n";
    else cout<<"El Dr. Jones encontro el santo grial\n";
}
