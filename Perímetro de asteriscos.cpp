#include <stdio.h>
int n,m;
int main(){
    scanf("%i%i", &n, &m);
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(j>0)printf(" ");
            if(i>0 && i<n-1 && j>0 && j<m-1)printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
