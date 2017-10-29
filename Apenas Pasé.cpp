#include <stdio.h>
double x,sum=0,aux;
int n;
int main(){
    scanf("%lf%i", &x, &n);
    for(int i=0;i<n;++i)scanf("%lf", &aux),sum+=aux;
    printf(sum/n>x?"Presume":"Ladra");
}
