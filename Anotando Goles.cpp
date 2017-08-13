#include <stdio.h>
int main(){
    int a,b,x,res=0,ma;
    scanf("%i%i", &a, &b);
    ma=a;
    while(b--){
        scanf("%i", &x);
        if(x>a)res++;
        ma=ma>x?ma:x;
    }
    printf("%i\n%i\n", ma-a, res);
}
