
#include <stdio.h>
int a,b,c;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    if( (a==b && b==c) || (a+b+c>10 && a+b+c!=13 && a+b+c!=19) )printf("Gana\n");
    else if(a+b+c==4 || a+b+c==7 || a+b+c==13 || a+b+c==19)printf("Empate");
    else if(a+b+c<=10 && (a+b+c!=4 && a+b+c!=7))printf("Pierde");
}
