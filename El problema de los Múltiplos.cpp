#include <stdio.h>
int main(){
    int a,cont=0;
    scanf("%i", &a);
    for(int i=3;i<a;++i)if(i%3==0 || i%5==0)cont+=i;
    printf("%i\n", cont);
}
