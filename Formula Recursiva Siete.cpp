#include <stdio.h>
int n,m;
int f(int n,int m){
    if(n==5)return f(n-2,m-2)*2;
    if(n<5)return 20;
    if(n>5)return f(n-1,m-1)+2;
}
int main(){
    scanf("%i%i", &n, &m);
    printf("%i", f(n,m));
}
