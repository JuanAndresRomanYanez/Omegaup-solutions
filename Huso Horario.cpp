#include <stdio.h>
int h,m,h1,m1;
int solve(int h,int m,int h1,int m1){
    h=h*60+m,h1=h1*60+m1,h=h>h1?1440-h+h1:h1-h;
    printf("%i", h/60);
}
int main(){
    scanf("%i%i%i%i", &h, &m, &h1, &m1),solve(h,m,h1,m1);
}
