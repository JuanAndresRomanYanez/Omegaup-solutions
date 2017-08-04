#include <stdio.h>
int main(){
    int a,x,y;
    scanf("%i", &a);
    while(a--){
        scanf("%i%i", &x, &y);
        printf("%i%i\n", x-y,x+y);
    }
}
