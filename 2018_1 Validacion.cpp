#include <stdio.h>
int a,b;
int main(){
    while(scanf("%i%i", &a, &b)){
        if( (a==b) || (a>1000 && b>1000) || (a%2==0 && b%2==1) || (a%2==1 && b%2==0))break;
        printf("TODAVIA NO\n");
    }
    printf("YA");
}
