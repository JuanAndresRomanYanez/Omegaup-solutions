#include <stdio.h>
int a,b,c;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    if(c==0)printf("%i", a+b);
    else if(c==1)printf("%i", a-b);
    else if(c==2)printf("%i", a*b);
    else printf("%i", a/b);
}
