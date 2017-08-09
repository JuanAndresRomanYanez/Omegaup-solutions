#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f%f", &a, &b);
    printf("%f\n", 1/((1/a)-(1/b)));
    return 0;
}
