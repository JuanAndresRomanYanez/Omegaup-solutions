#include <stdio.h>
#include <math.h>
double a,b,c,s;
int main(){
    scanf("%lf%lf%lf", &a, &b, &c),printf("Root +: %.4lf\nRoot -: %.4lf\n", (-b+sqrt(b*b-4*a*c))/(a*2), (-b-sqrt(b*b-4*a*c))/(a*2));
}
