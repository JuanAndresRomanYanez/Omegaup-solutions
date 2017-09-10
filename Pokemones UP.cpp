#include <stdio.h>
int n,m,x;
int main(){
    scanf("%i%i", &n, &m);
    while(n--)scanf("%i", &x),m-=x;
    printf(m<1?"Tu pokemon murio":"%i", m);
}
