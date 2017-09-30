#include <stdio.h>
int h,m,s,h1,m1,s1;
char p;
int main(){
    scanf("%i%c%i%c%i%i%c%i%c%i", &h,&p,&m,&p,&s,&h1,&p,&m1,&p,&s1);
    printf((h*3600)+(m*60)+s>(h1*3600)+(m1*60)+s1?"la primera":"la segunda");
}
