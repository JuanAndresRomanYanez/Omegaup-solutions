#include <stdio.h>
int n,t,x,d=0;
int main(){
    scanf("%i%i", &n, &t);
    while(n--){
        scanf("%i", &x);
        t-=x,d++;
        if(t<=0)break;
    }
    printf("%i", d);
}
