#include <stdio.h>
int n,x;
int v[1000001];
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),v[x]++;
    scanf("%i", &x);
    printf("%i", v[x]);
}
