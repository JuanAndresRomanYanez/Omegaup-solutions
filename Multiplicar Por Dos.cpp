#include <stdio.h>
int a,b,ma,mi;
int main(){
    scanf("%i%i", &a, &b);
    if(a!=b){
            if(a%2!=0)a*=2;
            if(b%2!=0)b*=2;
            if(a!=b){
                ma=a>b?a:b;
                mi=a<b?a:b;
                while(ma>mi && ma%2==0){
                    ma/=2;
                    if(ma==mi){goto kok;}
                }
                printf("tristemil\n");
                return 0;
            }
    }
    kok:;
    printf("felizmil\n");
}
