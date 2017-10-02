#include <stdio.h>
int v[2];
int n,x;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),v[x]++;
    scanf("%i", &n);
    while(n--)scanf("%i", &x),v[x]++;
    printf("%i\n%i", v[0], v[1]);
}
