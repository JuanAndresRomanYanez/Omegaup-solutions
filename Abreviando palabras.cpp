#include <stdio.h>
int main(){
    int a;
    scanf("%i", &a);
    char b[a];
    scanf("%s", b);
    if(a>10)printf("%c%i%c\n", b[0], a-2, b[a-1]);
    else printf("%s\n", b);
}
