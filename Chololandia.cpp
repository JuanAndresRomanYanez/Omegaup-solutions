#include <stdio.h>
int n,x,cont=0,l;
int main(){
    scanf("%i%i", &n, &x);
    while(n--){
            scanf("%i", &l);
            if(l<x)cont++;
    }
    printf("%i", cont);
}
