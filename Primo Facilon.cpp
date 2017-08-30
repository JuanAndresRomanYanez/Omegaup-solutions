#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    printf(n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19?"Primo":"No primo");
}
