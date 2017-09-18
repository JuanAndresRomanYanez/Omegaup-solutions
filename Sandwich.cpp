#include <stdio.h>
int n,a,b,cont=0,x;
int main(){
    scanf("%i%i%i", &n, &a, &b);
    while(n--){
            scanf("%i", &x);
            if(x>a && x<b)cont++;
    }
    printf("%i", cont);
}
