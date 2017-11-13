#include <stdio.h>
int n;
int solve(int n){
    for(int i=2;i*i<=n;++i)if(n%i==0){printf("NO");return 0;}
    printf("SI\n");
}
int main(){
    scanf("%i", &n),solve(n);
}
