#include <stdio.h>
int n,x;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    scanf("%i", &n);
    while(n--)scanf("%i", &x),printf("%i\n", v[x-1]);
}
