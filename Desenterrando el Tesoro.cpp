#include <stdio.h>
int n,m,x,cont=0;
int main(){
    scanf("%i%i", &n, &m);
    for(int i=0;i<(n*n);++i){
            scanf("%i", &x);
            if(x==0)cont++;
    }
    printf("%i\n", m+cont-1);
}
