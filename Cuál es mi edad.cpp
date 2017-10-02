#include <stdio.h>
int a,m,d;
int main(){
    scanf("%i%i%i", &a, &m, &d);
    if(a<2015)printf("%i", m<=2 && d<=12?2015-a:2014-a);
    else printf("0");
}
