#include <stdio.h>
int n,k,x,cont=0;
int main(){
    scanf("%i%i", &n, &k);
    while(n--){
            scanf("%i", &x);
            if(x>=k)cont++;
    }
    printf("%i", cont);
}
