#include <stdio.h>
#include <string.h>
int main(){
    int a,b,x;
    scanf("%i%i", &a, &b);
    int v[a];
    memset(v,0,sizeof v);
    while(b--){
            scanf("%i", &x);
            v[x-1]++;
    }
    for(int i=0;i<a;++i)printf("%i\n", v[i]);
}
