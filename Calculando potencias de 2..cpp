#include <stdio.h>
int n;
int solve(int n){
    int i=-1;
    for(;n!=0;)n/=2,++i;
    return i;
}
int main(){
    scanf("%i", &n),printf("%i", solve(n));
}
