#include <stdio.h>
int main()
{
    int a,x,y,cont=0;
    scanf("%i", &a);
    while(a--){
        scanf("%i%i", &x, &y);
        cont=cont+(x*y);
    }
    printf("%i\n", cont);
    return 0;
}
