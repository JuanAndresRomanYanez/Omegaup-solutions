#include <stdio.h>
int n;
int solve(int n){
    for(int i=1;i<=n;++i)printf("%i\n", i);
}
int main(){
    scanf("%i", &n),solve(n);
}
