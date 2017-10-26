#include <stdio.h>
long long a,b,c;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c);
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)printf(a==b && a==c?"Equilateral":(a==b || b==c || a==c?"Isosceles":"Scalene"));
    else printf("Invalid");
}
