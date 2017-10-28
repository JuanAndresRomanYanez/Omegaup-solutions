#include <stdio.h>
int n;
int solve(int n){
    int cont=1;
    while(n!=1)n=n&1?n*3+1:n/2,cont++;
    return cont;
}
int main(){
    scanf("%i", &n),printf("%i", solve(n));
}
