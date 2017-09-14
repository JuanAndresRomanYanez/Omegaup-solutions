#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    for(int i=n-1;i>=0;--i)printf("%i ", v[i]);
}
