#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%i", &a);
    while(a--){
            scanf("%i%i", &b, &c);
            printf("%i\n", b+c);
    }
}
