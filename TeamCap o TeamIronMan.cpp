#include <stdio.h>
int n,x,tc=0,ti=0;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        if(x>=1 && x<=3)tc++;
        if(x>=3 && x<=5)ti++;
    }
    printf("%i %i", tc, ti);
}
