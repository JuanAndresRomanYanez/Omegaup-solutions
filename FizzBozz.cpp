#include <stdio.h>
int main(){
    int a,b;
    scanf("%i", &a);
    while(a--){
        scanf("%i", &b);
        if(b%3==0 && b%5==0)printf("FizzBozz\n");
        else if(b%3==0)printf("Fizz\n");
        else if(b%5==0)printf("Bozz\n");
        else printf("NoFizzBozz\n");
    }
}
