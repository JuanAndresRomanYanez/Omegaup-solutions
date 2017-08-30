#include <stdio.h>
int main(){
    int a,b,x,sum=0;
    scanf("%i%i", &a, &b);
    while(b--){
        scanf("%i", &x);
        sum+=x;
    }
    printf("%i %i\n", sum/a, sum%a);
}
