#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    printf(n==1?"lunes":(n==2?"martes":(n==3?"miercoles":(n==4?"jueves":(n==5?"viernes":(n==6?"sabado":"domingo"))))));
}
