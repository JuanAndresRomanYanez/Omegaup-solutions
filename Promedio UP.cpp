#include <stdio.h>
int n;
double x,sum=0;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i)scanf("%lf", &x),sum+=x;
    printf("%.2lf", sum/n);
}
