#include <stdio.h>
int n,x,y=-1000001;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),y=x>y?x:y;
    printf("%i", y);
}
