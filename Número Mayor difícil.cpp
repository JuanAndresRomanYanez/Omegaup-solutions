#include <stdio.h>
int n,x,ma=-1002;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        if(x>ma)ma=x;
    }
    printf("%i", ma);
}
