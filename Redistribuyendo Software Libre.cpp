#include <stdio.h>
int n,x;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),printf(x>2?"Ok\n":"No\n");
}
