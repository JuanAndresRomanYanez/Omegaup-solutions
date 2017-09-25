#include <stdio.h>
double r,h;
int main(){
    while(1){
        scanf("%lf", &r);
        if(r!=-1)break;
    }
    scanf("%lf", &h);
    printf("%.2lf", 6.2832*r*h);
}
