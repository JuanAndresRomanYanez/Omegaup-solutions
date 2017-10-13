#include <stdio.h>
int a,b,c,i;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    for(i=1;;++i){
        a-=b;
        if(a<=0)break;
        a+=c;
    }
    printf("%i", i);
}
