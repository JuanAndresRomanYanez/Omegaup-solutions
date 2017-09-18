#include <stdio.h>
int n,cont=0,res=0;
int main(){
    while(scanf("%i", &n)!=EOF){
        if(n==42 && res==0)res=cont;
        cont++;
    }
    printf("%i", res);
}
