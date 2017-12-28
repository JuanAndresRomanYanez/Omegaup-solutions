#include <stdio.h>
#include <algorithm>
int a,b,c,d,e,f;
int solve(int a, int b, int c, int d,int e, int f){
        int v[3]={a,b,c},V[3]={d,e,f};
        std::sort(v,v+3);
        std::sort(V,V+3);
        printf(v[0]<=V[0] && v[1]<=V[1] && v[2]<=V[2]?"1":"0");
}
int main(){
        scanf("%i%i%i%i%i%i", &a, &b, &c, &d, &e, &f),solve(a,b,c,d,e,f);
}
