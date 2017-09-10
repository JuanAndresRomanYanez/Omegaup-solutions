#include <stdio.h>
bool p[1000001];
int n,m,x,pl[1000001];
int main(){
    scanf("%i%i", &n, &m);
    for(int i=0;i<n;++i){
        scanf("%i", &x);
        if(p[x]==false)p[x]=true,pl[x]=i;
    }
    while(m--)scanf("%i", &x),printf(p[x]==false?"-1\n": "%i\n", pl[x] );
}
