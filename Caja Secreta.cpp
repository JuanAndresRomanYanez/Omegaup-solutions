#include <stdio.h>
int n,p,it=0,x;
int main(){
    scanf("%i%i", &n, &p);
    int v[n-1];
    while(n--){
            scanf("%i", &x);
            if(x!=p)v[it]=x,it++;
    }
    for(int i=0;i<it;++i)printf("%i\n", v[i]);
}
