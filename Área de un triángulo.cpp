#include <stdio.h>
#include <math.h>
double a,b,c,s;
int main(){
    scanf("%lf%lf%lf", &a, &b, &c);
    s=(a+b+c)/2,s=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Side 1: %.4lf\nSide 2: %.4lf\nSide 3: %.4lf\nArea : %.4lf\n", a,b,c, s);
}
