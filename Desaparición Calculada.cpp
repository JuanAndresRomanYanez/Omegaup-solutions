#include <stdio.h>
int main(){
    int a,sum=0,b;
    scanf("%i", &a);
    for(int i=1;i<a;++i){
        scanf("%i", &b);
        sum+=b;
    }
    printf("%i", (a*(a+1)/2)-sum);
}
