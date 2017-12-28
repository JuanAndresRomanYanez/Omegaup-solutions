#include <stdio.h>
int n;
int solve(int n){
    int par=0,impar=0,it=0,x;
    for(int i=0;i<n;++i){
            scanf("%i", &x);
            if(x&1)impar+=x;
            else par+=x,it++;
    }
    if(par/it>impar/(n-it))printf("APARICIO\n");
    else if(par/it<impar/(n-it))printf("NONILA\n");
    else printf("EMPATE!\n");
}
int main(){
    scanf("%i", &n),solve(n);
}
