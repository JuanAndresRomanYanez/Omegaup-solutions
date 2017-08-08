#include <stdio.h>
int main(){
    int a,c=0,d=0,x;
    scanf("%i", &a);
    while(a--){
        scanf("%i", &x);
        if(x%2==0)c+=x;
        else d+=x;
    }
    printf("%i %i", c, d);
    return 0;
}
