#include <stdio.h>
int a,b;
int solve(int n,int m){
    for(int i=n;i<=m;++i)printf("%i\n", i);
}
int main(){
    scanf("%i%i", &a, &b),solve(a,b);
}
