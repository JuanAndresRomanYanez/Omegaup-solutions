#include <stdio.h>
int a,b,c;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    if(a==b+c)printf("SI %i", a);
    else if(b==a+c)printf("SI %i", b);
    else if(c==a+b)printf("SI %i", c);
    else printf("NO");
}
