#include <stdio.h>
long long n,x,v[91];
void calculate(){
    v[0]=0,v[1]=1;
    for(int i=2;i<91;++i)v[i]=v[i-1]+v[i-2];
}
long long solve(long long x){
    int in=0,f=90,mid;
    while(in<=f){
        mid=(in+f)/2;
        if(v[mid]==x){printf("SI\n");goto kok;}
        if(v[mid]>x)f=mid-1;
        else in=mid+1;
    }
    printf("NO\n");
    kok:;
}
int main(){
    calculate();
    scanf("%lld", &n);
    while(n--)scanf("%lld", &x),solve(x);
}
