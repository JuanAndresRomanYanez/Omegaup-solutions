#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    if(n>0 && n<13){
        if(n>2 && n<6)printf("PRIMAVERA");
        else if(n>5 && n<9)printf("VERANO");
        else if(n>8 && n<12)printf("OTONIO");
        else printf("INVIERNO");
    }
    else printf("ERROR");
}
