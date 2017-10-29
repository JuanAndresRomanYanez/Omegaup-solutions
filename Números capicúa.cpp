#include <stdio.h>
int n;
int solve(int n){
    int inv=0,aux=n;
    while(n!=0)inv=inv*10+n%10,n/=10;
    printf(aux==inv?"SI":"NO");
}
int main(){
    scanf("%i", &n),solve(n);
}
