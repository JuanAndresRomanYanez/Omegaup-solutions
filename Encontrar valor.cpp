#include <stdio.h>
int n,k,v[1000001];
bool vis[1000001];
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i){
            scanf("%i", &k);
            if(vis[k]==false)v[k]=i;
            vis[k]=true;
    }
    scanf("%i", &k),printf(vis[k]==false?"NO":"%i", v[k]);
}
