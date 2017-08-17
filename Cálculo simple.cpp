#include <stdio.h>
int main(){
    double x,sum=0.00;
    int a,b;
    for(int i=0;i<2;++i){
        scanf("%i%i%lf", &a, &b, &x);
        sum+=(x*b);
    }
    printf("%.2lf\n", sum);
}
