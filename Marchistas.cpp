#include <stdio.h>
int n,m,x,y,r1=0,r2=0;
int main(){
    scanf("%i%i", &n, &m);
    int v[n*m];
    for(int i=0;i<n*m;++i)scanf("%i", &v[i]);
    scanf("%i%i", &x, &y);
    for(int i=0;i<n*m;++i){
        if(v[i]%x==0 && v[i]%y==0)r1++,r2++;
        else if(v[i]%x==0)r1++;
        else if(v[i]%y==0)r2++;
    }
    printf("%i %i", r1, r2);
}
