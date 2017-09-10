#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
        while(n>0){
            if(n==100){printf("C");return 0;}
            if(n>=90){
                n-=90;
                printf("XC");
            }
            if(n>=50){
                n-=50;
                printf("L");
            }
            if(n>=40){
                n-=40;
                printf("XL");
            }
            while(n>=10){
                n-=10;
                printf("X");
            }
            if(n>=9){
                n-=9;
                printf("IX");
            }
            if(n>=5){
                n-=5;
                printf("V");
            }
            if(n>=4){
                n-=4;
                printf("IV");
            }
            while(n>=1){
                n-=1;
                printf("I");
            }
        }
}
