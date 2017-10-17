#include <stdio.h>
int n;
int solve(int n){
    for(int i=1;i<=n*n;++i)printf(i%n==0?"1\n":"1 ");
}
int main(){
    scanf("%i", &n);
    solve(n);
}
