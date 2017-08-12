#include <stdio.h>
int main(){
    int a,b=0;
    scanf("%i", &a);
    if(a>99){
        b+=(a%10);
        a/=10;
        b*=10;
        b+=(a%10);
        a/=10;
        b*=10;
        b+=(a%10);
        printf("%i\n", b);
    }
    else if(a>9){
            b+=(a%10);
            a/=10;
            b*=10;
            b+=(a%10);
            printf("%i0\n", b);
    }
    else printf("%i00\n", a);
}
