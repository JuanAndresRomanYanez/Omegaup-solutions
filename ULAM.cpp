#include <stdio.h>
int main()
{
    int n;
    scanf("%i", &n);
    printf("%i", n);
    printf(" ");
    while(n>1){
        if(n%2==0){
                n=n/2;
                printf("%i", n);
                printf(" ");
        }
        else{
                n=n*3+1;
                printf("%i", n);
                printf(" ");
        }
    }
}
