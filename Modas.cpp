#include <stdio.h>
#include <algorithm>
int n,init,pres,cont=0;
int main(){
    scanf("%i%i%i", &n, &init, &pres);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    std::sort(v,v+n);
    for(int i=0;i<n;++i)if(v[i]<=init)cont++,init+=pres;
    printf("%i", cont);
}
