#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    printf("1 ");
    for(int i=0;i<n-1;++i)printf("%i ", v[i]+v[i+1]);
    printf("1\n");
}
