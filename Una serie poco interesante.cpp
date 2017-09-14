#include <stdio.h>
int a,b;
int main(){
    scanf("%i%i", &a, &b);
    b%=3;
    printf("%i %i", (a-b<=0?a-b+3:a-b), (a+b>3?(a+b)%3:a+b));
}
