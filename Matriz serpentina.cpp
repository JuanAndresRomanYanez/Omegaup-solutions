#include <stdio.h>
int n,m;
int solve(int n,int m){
    int k=-m+1;
    for(int i=0;i<n;++i){
        k+=m;
        if(i%2==0)for(int j=0;j<m;++j,++k)printf("%i ", k);
        else for(int j=0;j<m;++j)--k,printf("%i ", k);
        printf("\n");
    }
}
int main(){
    scanf("%i%i", &n, &m),solve(n,m);
}
