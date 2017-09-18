#include <stdio.h>
int main (){
    int b;
    scanf("%i", &b),printf(b%4==0 && b%100!=0 || b%400==0?"Es bisiesto":"No es bisiesto");
}
