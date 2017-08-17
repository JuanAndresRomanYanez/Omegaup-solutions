#include <stdio.h>
int main (){
    int b;
        scanf("%i", &b);
        printf(b%4==0 && b%100!=0 || b%400==0?"ES BISIESTO\n":"NO ES BISIESTO\n");
}
