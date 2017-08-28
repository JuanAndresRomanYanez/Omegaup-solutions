#include <stdio.h>
#include <math.h>
double a,b,c;
int main(){
    while((scanf("%lf%lf%lf", &a, &b, &c))!=EOF){
        if( (b*b)-(4*a*c)<0.00000000 || a==0.00000000)printf("Impossivel calcular\n");
        else printf("R1 = %.5lf\nR2 = %.5lf\n",  (-b+(sqrt(b*b-4*a*c)))/(2*a) ,(-b-( sqrt(b*b-4*a*c) ) )/(2*a) );
    }
}
