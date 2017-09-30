
#include <stdio.h>
int v[10001];
void solve(){
    v[1]=1;v[2]=3;
    for(int i=3;i<10001;++i)v[i]=i+v[i/2];
}
int n;
int main(){
    solve();
    scanf("%i", &n),printf("%i", v[n]);
}
