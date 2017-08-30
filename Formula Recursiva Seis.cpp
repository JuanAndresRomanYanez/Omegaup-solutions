#include <stdio.h>
int n;
int f(int n){
    if(n<=20)return 1;
    return f(n-5)+5+n;
}
int main(){
    scanf("%i", &n);
    printf("%i", f(n));
}
