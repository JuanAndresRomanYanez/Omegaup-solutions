#include <stdio.h>
int main(){
    int a,sum=0;
    while(scanf("%i", &a) && a!=0)sum+=a;
    printf("%i\n", sum);
}
