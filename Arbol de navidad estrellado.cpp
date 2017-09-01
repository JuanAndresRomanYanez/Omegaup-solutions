#include <stdio.h>
int n,x=3;
int main(){
    scanf("%i", &n);
    for(int i=0;i<=n;++i){
        for(int j=n-i;j>=0;--j)printf(" ");
        if(i==0)printf("*");
        else{
                for(int i=0;i<x;++i)printf("o");
                x+=2;
        }
        printf("\n");
    }
}
