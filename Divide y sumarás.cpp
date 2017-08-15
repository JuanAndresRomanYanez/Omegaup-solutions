#include <stdio.h>
int main()
{
    int a,x=1,sum=0;
    scanf("%i", &a);
    while(1){
        if(x<=a){sum+=(a/x);}
        else break;
        x*=2;
    }
    printf("%i\n", sum);
    return 0;
}
