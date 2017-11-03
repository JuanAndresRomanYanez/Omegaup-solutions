#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
char a[4][4];
int n,x,y;
int solve(int x,int y){
            if(x-1>=0){
                if(a[x-1][y]=='w')a[x-1][y]='b';
                else a[x-1][y]='w';
            }
            if(x+1<=3){
                if(a[x+1][y]=='w')a[x+1][y]='b';
                else a[x+1][y]='w';
            }
            if(y-1>=0){
                if(a[x][y-1]=='w')a[x][y-1]='b';
                else a[x][y-1]='w';
            }
            if(y+1<=3){
                if(a[x][y+1]=='w')a[x][y+1]='b';
                else a[x][y+1]='w';
            }
            if(a[x][y]=='w')a[x][y]='b';
            else a[x][y]='w';
}
void imprimir(){
    for(int i=0;i<4;++i){
            for(int j=0;j<4;++j)cout<<a[i][j];
            cout<<"\n";
    }
}
void ingresar(){
    for(int i=0;i<4;++i)for(int j=0;j<4;++j)cin>>a[i][j];
    cin>>n;
    while(n--){
            cin>>x>>y;
            solve(x,y);
    }
}
int main(){
    optimizar_io
    ingresar(),imprimir();
}
