#include <stdio.h>
int n,x,sum=0,s1=0,s2=0;
int v[12];
int main(){
    v[2]=v[3]=v[4]=v[5]=v[6]=v[7]=v[8]=v[9]=4,v[10]=16,v[11]=4;
    scanf("%i", &n);
    for(int i=0;i<n;++i)scanf("%i", &x),v[x]--,sum+=x;
    for(int i=2;i<=21-sum;++i)s1+=v[i];
    for(int i=22-sum;i<12;++i)s2+=v[i];
    printf(s1>s2?"VUCI":"DOSTA");
}
